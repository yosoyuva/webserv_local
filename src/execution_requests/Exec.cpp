/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Exec.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymehdi <ymehdi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 17:55:05 by ymehdi            #+#    #+#             */
/*   Updated: 2022/03/10 17:55:16 by ymehdi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Exec.hpp"

Exec::Exec(void)
{}

Exec::~Exec(void)
{}

Exec::Exec(const Exec & other)
{
	*this = other;
}

Exec & Exec::operator=(const Exec & other)
{
	if (this != &other)
	{

	}
	return (*this);
}
