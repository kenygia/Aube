/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kenygia <kenydbzgt@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/11 02:40:43 by kenygia           #+#    #+#             */
/*   Updated: 2015/08/11 03:20:36 by kenygia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
	while(argc <= 0)
	{
		cout << argv[argc] << endl;
		argc = argc - 1;
	}
	
	return (0);
}
