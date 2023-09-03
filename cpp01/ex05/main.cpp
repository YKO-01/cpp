/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayakoubi <ayakoubi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 15:38:03 by ayakoubi          #+#    #+#             */
/*   Updated: 2023/09/03 10:32:32 by ayakoubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char **av)
{
    (void) av;
    Harl h;

    if (ac > 1)
    {
        std::cout << "Syntax Srror " << std::endl;
        return (0);
    }
    h.complain("debug");
    return (0);
}