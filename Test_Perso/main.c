/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpons <tpons@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/13 16:19:31 by rchallie          #+#    #+#             */
/*   Updated: 2019/12/02 17:25:24 by tpons            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
#include <stdlib.h>
#include "main_printf.h"

int main()
{
	system("echo \"\x1b[33m\"");

	printf("---------------------------------- SIMPLE --------------------------------------\n");

	system("echo \"\x1b[36m\"");
	
	printf("(%d)\n", printf(">    printf : Ecrire une phrase symple ! "));
	printf("(%d)\n", ft_printf("> ft_printf : Ecrire une phrase symple ! "));

	// system("echo \"\x1b[33m\"");

	// ft_printf("--------------------------------------------------------------------------------\n");
	// ft_printf("\n----------------------------------- CHAR ---------------------------------------\n");

	// system("echo \"\x1b[36m\"");
	
	// printf("(%d)\n", printf(">    printf : Ecrire un char : [%c]", 'a'));                 
	// printf("(%d)\n", ft_printf("> ft_printf : Ecrire un char : [%c]", 'a'));
	// printf("(%d)\n", printf(">    printf : Ecrire un char : [%20c]", 'b'));
	// printf("(%d)\n", ft_printf("> ft_printf : Ecrire un char : [%20c]", 'b'));
	// printf("(%d)\n", printf(">    printf : Ecrire un char : [%c20]", 'd'));
	// printf("(%d)\n", ft_printf("> ft_printf : Ecrire un char : [%c20]", 'd'));
	// printf("(%d)\n", printf(">    printf : Ecrire un char : [%-20c]", 'c'));
	// printf("(%d)\n", ft_printf("> ft_printf : Ecrire un char : [%-20c]", 'c'));
	// printf("(%d)\n", printf(">    printf : Ecrire un char : [%*c]", 5, 'e'));
	// printf("(%d)\n", ft_printf("> ft_printf : Ecrire un char : [%*c]", 5, 'e'));
	// printf("(%d)\n", printf(">    printf : Ecrire un char : [%-*c]", 8, 'f'));
	// printf("(%d)\n", ft_printf("> ft_printf : Ecrire un char : [%-*c]", 8, 'f'));
	// printf("(%d)\n", printf(">    printf : Ecrire un char : [%*.c]", 9, 'g'));
	// printf("(%d)\n", ft_printf("> ft_printf : Ecrire un char : [%*.c]", 9, 'g'));
	// printf("(%d)\n", printf(">    printf : Ecrire un char : [%*.c]", 0, 'h'));
	// printf("(%d)\n", ft_printf("> ft_printf : Ecrire un char : [%*.c]", 0, 'h'));
	// printf("(%d)\n", printf(">    printf : Ecrire un char : [%5.c]", 'i'));
	// printf("(%d)\n", ft_printf("> ft_printf : Ecrire un char : [%5.c]", 'i'));
	// printf("(%d)\n", printf(">    printf : Ecrire un char : [%.c]", 'i'));
	// printf("(%d)\n", ft_printf("> ft_printf : Ecrire un char : [%.c]",'i'));

	// system("echo \"\x1b[33m\"");

	// ft_printf("--------------------------------------------------------------------------------\n");
	// ft_printf("\n----------------------------------- STRING ---------------------------------------\n");

	// system("echo \"\x1b[36m\"");
	
	// printf("(%d)\n", printf(">    printf : Ecrire une string : [%s] && Second test : [%s]", "test1", "test2"));
	// printf("(%d)\n", ft_printf("> ft_printf : Ecrire une string : [%s] && Second test : [%s]", "test1", "test2"));
	// printf("(%d)\n", printf(">    printf : Ecrire une string : [%10s] && Second test : [%5s]", "test1", "test2"));
	// printf("(%d)\n", ft_printf("> ft_printf : Ecrire une string : [%10s] && Second test : [%5s]", "test1", "test2"));
	// printf("(%d)\n", printf(">    printf : Ecrire une string : [%2s] && Second test : [%6s]", "test1", "test2"));
	// printf("(%d)\n", ft_printf("> ft_printf : Ecrire une string : [%2s] && Second test : [%6s]", "test1", "test2"));
	// printf("(%d)\n", printf(">    printf : Ecrire une string : [%-5s] && Second test : [%-12s]", "test1", "test2"));
	// printf("(%d)\n", ft_printf("> ft_printf : Ecrire une string : [%-5s] && Second test : [%-12s]", "test1", "test2"));
	// printf("(%d)\n", printf(">    printf : Ecrire une string : [%*s] && Second test : [%*s]", 6 , "test1", 9, "test2"));
	// printf("(%d)\n", ft_printf("> ft_printf : Ecrire une string : [%*s] && Second test : [%*s]", 6 , "test1", 9, "test2"));
	// printf("(%d)\n", printf(">    printf : Ecrire une string : [%-*s] && Second test : [%-*s]", 5 , "test1", 9, "test2"));
	// printf("(%d)\n", ft_printf("> ft_printf : Ecrire une string : [%-*s] && Second test : [%-*s]", 5 , "test1", 9, "test2"));
	// printf("(%d)\n", printf(">    printf : Ecrire une string : [%.5s]", "De 5cnormalement"));
	// printf("(%d)\n", ft_printf("> ft_printf : Ecrire une string : [%.5s]", "De 5cnormalement"));
	// printf("(%d)\n", printf(">    printf : Ecrire une string : [%.*s]", 5 , "De 5cnormalement"));
	// printf("(%d)\n", ft_printf("> ft_printf : Ecrire une string : [%.*s]", 5 , "De 5cnormalement"));
	// printf("(%d)\n", printf(">    printf : Ecrire une string : [%.s]","De 5cnormalement"));
	// printf("(%d)\n", ft_printf("> ft_printf : Ecrire une string : [%.s]","De 5cnormalement"));
	// printf("(%d)\n", printf(">    printf : Ecrire une string : [%10.25s]","Ceci est un doublon"));
	// printf("(%d)\n", ft_printf("> ft_printf : Ecrire une string : [%10.25s]","Ceci est un doublon"));
	// printf("(%d)\n", printf(">    printf : Ecrire une string : [%5.2s]","Ceci est un doublon"));
	// printf("(%d)\n", ft_printf("> ft_printf : Ecrire une string : [%5.2s]","Ceci est un doublon"));
	// printf("(%d)\n", printf(">    printf : Ecrire une string : [%s]", NULL));
	// printf("(%d)\n", ft_printf("> ft_printf : Ecrire une string : [%s]", NULL));

	system("echo \"\x1b[33m\"");

	ft_printf("--------------------------------------------------------------------------------\n");
	ft_printf("\n----------------------------------- INT ----------------------------------------\n");

	system("echo \"\x1b[36m\"");
	
	printf("(%d)\n", printf(">    printf : Ecrire un int : [%d]", 0));
	printf("(%d)\n", ft_printf("> ft_printf : Ecrire un int : [%d]", 0));
	printf("(%d)\n", printf(">    printf : Ecrire un int : [%d]", 120));
	printf("(%d)\n", ft_printf("> ft_printf : Ecrire un int : [%d]", 120));
	printf("(%d)\n", printf(">    printf : Ecrire un int : [%d]", -120));
	printf("(%d)\n", ft_printf("> ft_printf : Ecrire un int : [%d]", -120));
	printf("(%d)\n", printf(">    printf : Ecrire un int : [%d]", 2147483647));
	printf("(%d)\n", ft_printf("> ft_printf : Ecrire un int : [%d]", 2147483647));
	printf("(%d)\n", printf(">    printf : Ecrire un int : [%20d]", 2147483647));
	printf("(%d)\n", ft_printf("> ft_printf : Ecrire un int : [%20d]", 2147483647));
	printf("(%d)\n", printf(">    printf : Ecrire un int : [%012d]", 3658));
	printf("(%d)\n", ft_printf("> ft_printf : Ecrire un int : [%012d]", 3658));
	printf("(%d)\n", printf(">    printf : Ecrire un int : [%05d]", -42));
	printf("(%d)\n", ft_printf("> ft_printf : Ecrire un int : [%05d]", -42));
	printf("(%d)\n", printf(">    printf : Ecrire un int : [%-20d]", 2147483647));
	printf("(%d)\n", ft_printf("> ft_printf : Ecrire un int : [%-20d]", 2147483647));
	printf("(%d)\n", printf(">    printf : Ecrire un int : [%*d]", 10, -5894));
	printf("(%d)\n", ft_printf("> ft_printf : Ecrire un int : [%*d]", 10, -5894));
	printf("(%d)\n", printf(">    printf : Ecrire un int : [%0*d]", 5, 3));
	printf("(%d)\n", ft_printf("> ft_printf : Ecrire un int : [%0*d]", 5, 3));
	printf("(%d)\n", printf(">    printf : Ecrire un int : [%-*d]", 10, -5894));
	printf("(%d)\n", ft_printf("> ft_printf : Ecrire un int : [%-*d]", 10, -5894));
	printf("(%d)\n", printf(">    printf : Ecrire un int : [%.d]", -5894));
	printf("(%d)\n", ft_printf("> ft_printf : Ecrire un int : [%.d]", -5894));
	printf("(%d)\n", printf(">    printf : Ecrire un int : [%.8d]", -5894));
	printf("(%d)\n", ft_printf("> ft_printf : Ecrire un int : [%.8d]", -5894));
	printf("(%d)\n", printf(">    printf : Ecrire un int : [%050.10i]", 12345));
	printf("(%d)\n", ft_printf("> ft_printf : Ecrire un int : [%050.10i]", 12345));
	printf("(%d)\n", printf(">    printf : Ecrire un int : [%025.10i]", -12345));
	printf("(%d)\n", ft_printf("> ft_printf : Ecrire un int : [%025.10i]", -12345));
	printf("(%d)\n", printf(">    printf : Ecrire un int : [%-.8d]", -5894));
	printf("(%d)\n", ft_printf("> ft_printf : Ecrire un int : [%-.8d]", -5894));
	printf("(%d)\n", printf(">    printf : Ecrire un int : [%10.5d]", 4242));
	printf("(%d)\n", ft_printf("> ft_printf : Ecrire un int : [%10.5d]", 4242));
	printf("(%d)\n", printf(">    printf : Ecrire un int : [%-10.5d]", 4242));
	printf("(%d)\n", ft_printf("> ft_printf : Ecrire un int : [%-10.5d]", 4242));
	printf("(%d)\n", printf(">    printf : Ecrire un int : [%.d : %.0d]", 0, 0));
	printf("(%d)\n", ft_printf("> ft_printf : Ecrire un int : [%.d : %.0d]", 0, 0));
	printf("(%d)\n", printf(">    printf : Ecrire un int : [%5.d : %5.0d]", 0, 0));
	printf("(%d)\n", ft_printf("> ft_printf : Ecrire un int : [%5.d : %5.0d]", 0, 0));
	printf("(%d)\n", printf(">    printf : Ecrire un int : [%05.d : %05.0d]", 0, 0));
	printf("(%d)\n", ft_printf("> ft_printf : Ecrire un int : [%05.d : %05.0d]", 0, 0));

	system("echo \"\x1b[33m\"");

	// ft_printf("--------------------------------------------------------------------------------\n");
	// ft_printf("\n----------------------------------- U INT ----------------------------------------\n");

	// system("echo \"\x1b[36m\"");
	
	// printf("(%d)\n", printf(">    printf : Ecrire un unsigned int : [%u]", 0));
	// printf("(%d)\n", ft_printf("> ft_printf : Ecrire un unsigned int : [%u]", 0));
	// printf("(%d)\n", printf(">    printf : Ecrire un unsigned int : [%u]", -1));
	// printf("(%d)\n", ft_printf("> ft_printf : Ecrire un unsigned int : [%u]", -1));
	// printf("(%d)\n", printf(">    printf : Ecrire un unsigned int : [%u]", 120));
	// printf("(%d)\n", ft_printf("> ft_printf : Ecrire un unsigned int : [%u]", 120));
	// printf("(%d)\n", printf(">    printf : Ecrire un unsigned int : [%u]", -120));
	// printf("(%d)\n", ft_printf("> ft_printf : Ecrire un unsigned int : [%u]", -120));
	// printf("(%d)\n", printf(">    printf : Ecrire un unsigned int : [%20u]", 120));
	// printf("(%d)\n", ft_printf("> ft_printf : Ecrire un unsigned int : [%20u]", 120));
	// printf("(%d)\n", printf(">    printf : Ecrire un unsigned int : [%012u]", 89635));
	// printf("(%d)\n", ft_printf("> ft_printf : Ecrire un unsigned int : [%012u]", 89635));
	// printf("(%d)\n", printf(">    printf : Ecrire un unsigned int : [%-8u]", 14579));
	// printf("(%d)\n", ft_printf("> ft_printf : Ecrire un unsigned int : [%-8u]", 14579));
	// printf("(%d)\n", printf(">    printf : Ecrire un unsigned int : [%*u]", 8 , 14579));
	// printf("(%d)\n", ft_printf("> ft_printf : Ecrire un unsigned int : [%*u]", 8 , 14579));
	// printf("(%d)\n", printf(">    printf : Ecrire un unsigned int : [%-*u]", 8 , 14579));
	// printf("(%d)\n", ft_printf("> ft_printf : Ecrire un unsigned int : [%-*u]", 8 , 14579));
	// printf("(%d)\n", printf(">    printf : Ecrire un unsigned int : [%8.u]", 1586));
	// printf("(%d)\n", ft_printf("> ft_printf : Ecrire un unsigned int : [%8.u]", 1586));
	// printf("(%d)\n", printf(">    printf : Ecrire un unsigned int : [%.u]", -1586));
	// printf("(%d)\n", ft_printf("> ft_printf : Ecrire un unsigned int : [%.u]", -1586));
	// printf("(%d)\n", printf(">    printf : Ecrire un unsigned int : [%10.u],[%.0u]", 0, 0));
	// printf("(%d)\n", ft_printf("> ft_printf : Ecrire un unsigned int : [%10.u],[%.0u]", 0, 0));
	// printf("(%d)\n", printf(">    printf : Ecrire un unsigned int : [%.5u]", 42));
	// printf("(%d)\n", ft_printf("> ft_printf : Ecrire un unsigned int : [%.5u]", 42));
	// printf("(%d)\n", printf(">    printf : Ecrire un unsigned int : [%24.15u]", -42));
	// printf("(%d)\n", ft_printf("> ft_printf : Ecrire un unsigned int : [%24.15u]", -42));
	
	// system("echo \"\x1b[33m\"");

	// ft_printf("--------------------------------------------------------------------------------\n");
	// ft_printf("\n----------------------------------- POINTER ----------------------------------------\n");

	// system("echo \"\x1b[36m\"");

	// char *test = "PLOP";
	
	// printf(">    printf : Ecrire un pointer : [%p]\n", &test);
	// ft_printf("> ft_printf : Ecrire un pointer : [%p]\n", &test);
	// printf(">    printf : Ecrire un pointer : [%15p]\n", &test);
	// ft_printf("> ft_printf : Ecrire un pointer : [%15p]\n", &test);
	// printf(">    printf : Ecrire un pointer : [%-18p]\n", &test);
	// ft_printf("> ft_printf : Ecrire un pointer : [%-18p]\n", &test);
	// printf(">    printf : Ecrire un pointer : [%*p]\n", 18, &test);
	// ft_printf("> ft_printf : Ecrire un pointer : [%*p]\n", 18, &test);
	// printf(">    printf : Ecrire un pointer : [%-*p]\n", 18, &test);
	// ft_printf("> ft_printf : Ecrire un pointer : [%-*p]\n", 18, &test);
	// printf(">    printf : Ecrire un pointer : [%8.p]\n", &test);
	// ft_printf("> ft_printf : Ecrire un pointer : [%8.p]\n", &test);
	// printf(">    printf : Ecrire un pointer : [%18.p]\n", &test);
	// ft_printf("> ft_printf : Ecrire un pointer : [%18.p]\n", &test);
	// printf(">    printf : Ecrire un pointer : [%*.p]\n", 16, &test);
	// ft_printf("> ft_printf : Ecrire un pointer : [%*.p]\n", 16,  &test);
	// printf(">    printf : Ecrire un pointer : [%-*.p]\n", 16, &test);
	// ft_printf("> ft_printf : Ecrire un pointer : [%-*.p]\n", 16,  &test);

	// system("echo \"\x1b[33m\"");

	// ft_printf("--------------------------------------------------------------------------------\n");
	// ft_printf("\n----------------------------------- %% ----------------------------------------\n");

	// system("echo \"\x1b[36m\"");
	
	// printf("(%d)\n", printf(">    printf : Ecrire un pourcent : [%%]"));
	// printf("(%d)\n", ft_printf("> ft_printf : Ecrire un pourcent : [%%]"));
	// printf("(%d)\n", printf(">    printf : Ecrire un pourcent : [%20%]"));
	// printf("(%d)\n", ft_printf("> ft_printf : Ecrire un pourcent : [%20%]"));
	// printf("(%d)\n", printf(">    printf : Ecrire un pourcent : [%012%]"));
	// printf("(%d)\n", ft_printf("> ft_printf : Ecrire un pourcent : [%012%]"));
	// printf("(%d)\n", printf(">    printf : Ecrire un pourcent : [%-12%]"));
	// printf("(%d)\n", ft_printf("> ft_printf : Ecrire un pourcent : [%-12%]"));
	// printf("(%d)\n", printf(">    printf : Ecrire un pourcent : [%*%]", 5));
	// printf("(%d)\n", ft_printf("> ft_printf : Ecrire un pourcent : [%*%]", 5));
	// printf("(%d)\n", printf(">    printf : Ecrire un pourcent : [%-*%]", 5));
	// printf("(%d)\n", ft_printf("> ft_printf : Ecrire un pourcent : [%-*%]", 5));

	// system("echo \"\x1b[33m\"");

	// ft_printf("--------------------------------------------------------------------------------\n");
	// ft_printf("\n--------------------------------- Hexa (min) --------------------------------------\n");

	// system("echo \"\x1b[36m\"");
	
	// printf("(%d)\n", printf(">    printf : Ecrire un hexa : [%x]", -42));
	// printf("(%d)\n", ft_printf("> ft_printf : Ecrire un hexa : [%x]", -42));
	// printf("(%d)\n", printf(">    printf : Ecrire un hexa : [%x]", 15045161));
	// printf("(%d)\n", ft_printf("> ft_printf : Ecrire un hexa : [%x]", 15045161));
	// printf("(%d)\n", printf(">    printf : Ecrire un hexa : [%x]", -15045161));
	// printf("(%d)\n", ft_printf("> ft_printf : Ecrire un hexa : [%x]", -15045161));
	// printf("(%d)\n", printf(">    printf : Ecrire un hexa : [%x]", 0));
	// printf("(%d)\n", ft_printf("> ft_printf : Ecrire un hexa : [%x]", 0));
	// printf("(%d)\n", printf(">    printf : Ecrire un hexa : [%x]", 0xfa58b));
	// printf("(%d)\n", ft_printf("> ft_printf : Ecrire un hexa : [%x]", 0xfa58b));
	// printf("(%d)\n", printf(">    printf : Ecrire un hexa : [0]"));
	// printf("(%d)\n", ft_printf("> ft_printf : Ecrire un hexa : [%x]", 4294967296));
	// printf("(%d)\n", printf(">    printf : Ecrire un hexa : [%13x]", 5843));
	// printf("(%d)\n", ft_printf("> ft_printf : Ecrire un hexa : [%13x]", 5843));
	// printf("(%d)\n", printf(">    printf : Ecrire un hexa : [%13x]", 0));
	// printf("(%d)\n", ft_printf("> ft_printf : Ecrire un hexa : [%13x]", 0));
	// printf("(%d)\n", printf(">    printf : Ecrire un hexa : [%018x]", 987));
	// printf("(%d)\n", ft_printf("> ft_printf : Ecrire un hexa : [%018x]", 987));
	// printf("(%d)\n", printf(">    printf : Ecrire un hexa : [%-12x]", 0xa4e8));
	// printf("(%d)\n", ft_printf("> ft_printf : Ecrire un hexa : [%-12x]", 0xa4e8));
	// printf("(%d)\n", printf(">    printf : Ecrire un hexa : [%*x]", 9, 0xae37));
	// printf("(%d)\n", ft_printf("> ft_printf : Ecrire un hexa : [%*x]", 9, 0xae37));
	// printf("(%d)\n", printf(">    printf : Ecrire un hexa : [%-*x]", 9, 0xae37));
	// printf("(%d)\n", ft_printf("> ft_printf : Ecrire un hexa : [%-*x]", 9, 0xae37));
	// printf("(%d)\n", printf(">    printf : Ecrire un hexa : [%.5x : %0.5x]", 15, 15));
	// printf("(%d)\n", ft_printf("> ft_printf : Ecrire un hexa : [%.5x : %0.5x]", 15, 15));
	// printf("(%d)\n", printf(">    printf : Ecrire un hexa : [%.x : %.0x]", 0, 0));
	// printf("(%d)\n", ft_printf("> ft_printf : Ecrire un hexa : [%.x : %.0x]", 0, 0));
	// printf("(%d)\n", printf(">    printf : Ecrire un hexa : [%05.x : %5.0x]", 0, 0));
	// printf("(%d)\n", ft_printf("> ft_printf : Ecrire un hexa : [%05.x : %5.0x]", 0, 0));
	// printf("(%d)\n", printf(">    printf : Ecrire un hexa : [%.2x]", 5427));
	// printf("(%d)\n", ft_printf("> ft_printf : Ecrire un hexa : [%.2x]", 5427));
	// printf("(%d)\n", printf(">    printf : Ecrire un hexa : [%5.2x]", 5427));
	// printf("(%d)\n", ft_printf("> ft_printf : Ecrire un hexa : [%5.2x]", 5427));
	
	// system("echo \"\x1b[33m\"");

	// ft_printf("--------------------------------------------------------------------------------\n");
	// ft_printf("\n--------------------------------- Hexa (maj) --------------------------------------\n");

	// system("echo \"\x1b[36m\"");
	
	// printf("(%d)\n", printf(">    printf : Ecrire un hexa : [%X]", -42));
	// printf("(%d)\n", ft_printf("> ft_printf : Ecrire un hexa : [%X]", -42));
	// printf("(%d)\n", printf(">    printf : Ecrire un hexa : [%X]", 15045161));
	// printf("(%d)\n", ft_printf("> ft_printf : Ecrire un hexa : [%X]", 15045161));
	// printf("(%d)\n", printf(">    printf : Ecrire un hexa : [%X]", -15045161));
	// printf("(%d)\n", ft_printf("> ft_printf : Ecrire un hexa : [%X]", -15045161));
	// printf("(%d)\n", printf(">    printf : Ecrire un hexa : [%X]", 0));
	// printf("(%d)\n", ft_printf("> ft_printf : Ecrire un hexa : [%X]", 0));
	// printf("(%d)\n", printf(">    printf : Ecrire un hexa : [%X]", 0xfa58b));
	// printf("(%d)\n", ft_printf("> ft_printf : Ecrire un hexa : [%X]", 0xfa58b));
	// printf("(%d)\n", printf(">    printf : Ecrire un hexa : [0]"));
	// printf("(%d)\n", ft_printf("> ft_printf : Ecrire un hexa : [%X]", 4294967296));
	// printf("(%d)\n", printf(">    printf : Ecrire un hexa : [%13X]", 5843));
	// printf("(%d)\n", ft_printf("> ft_printf : Ecrire un hexa : [%13X]", 5843));
	// printf("(%d)\n", printf(">    printf : Ecrire un hexa : [%13X]", 0));
	// printf("(%d)\n", ft_printf("> ft_printf : Ecrire un hexa : [%13X]", 0));
	// printf("(%d)\n", printf(">    printf : Ecrire un hexa : [%018X]", 987));
	// printf("(%d)\n", ft_printf("> ft_printf : Ecrire un hexa : [%018X]", 987));
	// printf("(%d)\n", printf(">    printf : Ecrire un hexa : [%-12X]", 0xa4e8));
	// printf("(%d)\n", ft_printf("> ft_printf : Ecrire un hexa : [%-12X]", 0xa4e8));
	// printf("(%d)\n", printf(">    printf : Ecrire un hexa : [%*X]", 9, 0xae37));
	// printf("(%d)\n", ft_printf("> ft_printf : Ecrire un hexa : [%*X]", 9, 0xae37));
	// printf("(%d)\n", printf(">    printf : Ecrire un hexa : [%-*X]", 9, 0xae37));
	// printf("(%d)\n", ft_printf("> ft_printf : Ecrire un hexa : [%-*X]", 9, 0xae37));
	// printf("(%d)\n", printf(">    printf : Ecrire un hexa : [%.5x : %0.5X]", 15, 15));
	// printf("(%d)\n", ft_printf("> ft_printf : Ecrire un hexa : [%.5x : %0.5X]", 15, 15));
	// printf("(%d)\n", printf(">    printf : Ecrire un hexa : [%.x : %.0X]", 0, 0));
	// printf("(%d)\n", ft_printf("> ft_printf : Ecrire un hexa : [%.x : %.0X]", 0, 0));
	// printf("(%d)\n", printf(">    printf : Ecrire un hexa : [%05.x : %5.0X]", 0, 0));
	// printf("(%d)\n", ft_printf("> ft_printf : Ecrire un hexa : [%05.x : %5.0X]", 0, 0));
	// printf("(%d)\n", printf(">    printf : Ecrire un hexa : [%.2X]", 5427));
	// printf("(%d)\n", ft_printf("> ft_printf : Ecrire un hexa : [%.2X]", 5427));
	// printf("(%d)\n", printf(">    printf : Ecrire un hexa : [%5.2X]", 5427));
	// printf("(%d)\n", ft_printf("> ft_printf : Ecrire un hexa : [%5.2X]", 5427));
	
	// system("echo \"\x1b[33m\"");

	// ft_printf("--------------------------------------------------------------------------------\n");
	// ft_printf("\n--------------------------------- UNDEF --------------------------------------\n");

	// system("echo \"\x1b[36m\"");

	// /*printf("(%d)\n", printf(">    printf : (\"%%\")   : |%| "));
	// printf("(%d)\n", ft_printf("> ft_printf : (\"%%\")   : |%| "));
	// printf("(%d)\n", printf(">    printf : (\"%%%c\")  : |%Z| ", 'Z'));
	// printf("(%d)\n", ft_printf("> ft_printf : (\"%%%c\")  : |%Z| ", 'Z'));
	// */
	// char c;

	// c = 'p';
	// printf("(%d)\n", printf("% i", -216));
	// printf("(%d)\n", ft_printf("% i", -216));
	// printf("(%d)\n", printf("%.0p, %.p", 0, 0));
	// printf("(%d)\n", ft_printf("%.0p, %.p", 0, 0));
	// printf("(%d)\n", printf("%.5p", 0));
	// printf("(%d)\n", ft_printf("%.5p", 0));
	// printf("(%d)\n", printf("%9.2p", 1234));
	// printf("(%d)\n", ft_printf("%9.2p", 1234));
	// printf("(%d)\n", printf("%2.9p", 1234));
	// printf("(%d)\n", ft_printf("%2.9p", 1234));
	// printf("(%d)\n", printf("%.0i", 0));
	// printf("(%d)\n", ft_printf("%.0h", 0));

	// system("echo \"\x1b[33m\"");
	
	// ft_printf("--------------------------------------------------------------------------------\n");
	
	return (0);
}