/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayakoubi <ayakoubi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 17:05:25 by ayakoubi          #+#    #+#             */
/*   Updated: 2023/08/03 12:44:04 by ayakoubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
    std::string str = "HI THIS IS BRAIN";
    std::string *ptr = &str;
    std::string &ref = str;

    std::cout << &str << std::endl;
    std::cout << ptr << std::endl;
    std::cout << &ref << std::endl;

    std::cout << str << std::endl;
    std::cout << *ptr << std::endl;
    std::cout << ref << std::endl;

    return (0);
}