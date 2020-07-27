#include "Squad.hpp"

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
        this0>push(other.getUnit(i));
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

int    Squd::push(ISpaceMarine *n)
{
    if(this->trops == nullptr)
    {
        this->trops = new this->t_marine;
        this->trops->trop = new ISpaceMarine(*n);
        this->trops->next = nullptr;
    }
    else
    {
        this->t_marine *tmp = this->trops;
        while(tmp->next != nullptr)
        {
            tmp = tmp->next;
        }

        tmp->next = new this->t_marine;
        tmp = tmp->next;
        tmp->trop = new ISpaceMarine(*n);
        tmp->next = nullptr;
    }

    this->ntrops++;

    return(this->getCount());
}

int     Squad::getCount() const
{
    return (this->ntrops);
}

ISpaceMarine    *Squad::getUnit(int N) const
{
    if(N > ntrops - 1)
        return(nullptr);
    else
    {
        t_marine *tmp = this->trops;
        int cnt = 0;
        while(cnt != N)
        {
            tmp = tmp->next;
        }
        return (tmp->trop);
    }
    
}