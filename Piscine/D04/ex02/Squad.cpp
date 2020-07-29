#include "Squad.hpp"
#include "TacticalMarine.hpp"

Squad::Squad(void) : ntrops(-1), trops(nullptr){};

Squad::Squad(Squad const &other)
{
    this->ntrops = other.getCount();

    this->clearTrops(this->trops);
    this->trops = nullptr;

    for(int i = 0; i <= this->ntrops; i++)
    {
        this->push(other.getUnit(i));
    }
}

Squad::~Squad(void)
{
    this->clearTrops(this->trops);
    this->trops = nullptr;
}

Squad &Squad::operator=(Squad const &other)
{
    this->ntrops = other.getCount();

    this->clearTrops(this->trops);
    this->trops = nullptr;

    for(int i = 0; i <= this->ntrops; i++)
    {
        this->push(other.getUnit(i));
    }

    return (*this);
}

void    Squad::clearTrops(t_marine *trops)
{
    if(trops->next != nullptr)
        clearTrops(trops->next);
    
    delete trops->trop;
    this->ntrops--;
    delete trops->next;

}

int    Squad::push(ISpaceMarine *n)
{
    if(this->trops == nullptr)
    {
        this->trops = new t_marine;
        this->trops->trop = n;
        this->trops->next = nullptr;
    }
    else
    {
        t_marine *tmp = this->trops;
        while(tmp->next != nullptr)
        {
            tmp = tmp->next;
        }

        tmp->next = new t_marine;
        tmp = tmp->next;
        tmp->trop = n;
        tmp->next = nullptr;
    }

    this->ntrops++;

    return(this->getCount());
}

int     Squad::getCount() const
{
    return (this->ntrops + 1);
}

ISpaceMarine    *Squad::getUnit(int N) const
{
    if(N > ntrops)
        return(nullptr);
    else
    {
        t_marine *tmp = this->trops;
        int cnt = 0;
        while(cnt != N)
        {
            tmp = tmp->next;
            cnt++;
        }
        return (tmp->trop);
    }
    
}