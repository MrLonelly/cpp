#include <iostream>
#include <stack>
#include <string>
#include <sstream>
#include "Fixed.class.hpp"

Fixed   calc(Fixed a, Fixed b, char op)
{
    switch (op)
    {
    case '+':
        return(a + b);
        break;
    case '-':
        return(a - b);
        break;
    case '*':
        return (a * b);
        break;
    case '/':
        return (a / b);
        break;
    }
    return (a + a);
}

int     power(char op)
{
    if(op == '+' || op == '-')
        return (1);
    if(op == '*' || op == '/')
        return (2);
    return (0);
}

int     isoperation(char op)
{
    switch (op)
    {
    case '+':
        return(1);
        break;
    case '-':
        return(1);
        break;
    case '*':
        return (1);
        break;
    case '/':
        return (1);
        break;
    default:
        return(0);
    }
}

Fixed   eval_expr(char *exp)
{
    std::stack <Fixed>  values;
    std::stack <char>   ops;
    float               element;
    std::stringstream   ss;

    ss.str(exp);
    while(ss.gcount())
    {
        ss >> element;
        std::cout << element;
        if(element == ' ')
            continue;
        else if((int)element == '(')
        {
            ops.push((int)element);
        }
        else if((int)element == ')')
        {
            char op;
            Fixed a, b;
            while(!ops.empty() && ops.top() != '(')
            {
                a(values.top());
                values.pop();

                b(values.top());
                values.pop();
                
                op = ops.top();
                ops.pop();
                values.push(calc(a, b, op));
            }

            if(!ops.empty())
                ops.pop();
        }
        else if(isoperation((int)element))
        {
            while(!ops.empty() && power(ops.top()) >= power((int)element))
            {
                Fixed a, b;
                char op;

                a(values.top());
                values.pop();

                b(values.top());
                values.pop();

                op = ops.top();
                ops.pop();

                values.push(calc(a, b, op));
            }
        }
        else
        {
            Fixed val(element);
            values.push(val);
        }
    }

    while(!ops.empty())
    {   
        Fixed a, b;
        char op;

        a(values.top());
        values.pop();

        b(values.top());
        values.pop();

        op = ops.top();
        ops.pop();

        values.push(calc(a, b, op));
    }

    return (values.top());
}

int     main(int argc, char **argv)
{
    if(argc <= 1 || argc > 2)
    {
        std::cerr << "Usage: " << argv[0] << " [Expresion]" << std::endl;
    }
    else
    {
        Fixed a;
        
        a(eval_expr(argv[1]));

        std::cout << a;
    }

    return (0);
}