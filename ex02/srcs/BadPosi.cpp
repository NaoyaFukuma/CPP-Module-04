/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BadPosi.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfukuma <nfukuma@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 23:39:51 by nfukuma           #+#    #+#             */
/*   Updated: 2022/12/25 00:30:04 by nfukuma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include "BadPosi.hpp"

BadPosi::BadPosi(std::string err_msg) : err_msg_(err_msg)
{
}

std::string BadPosi::what() const
{
	return (this->err_msg_);
}
