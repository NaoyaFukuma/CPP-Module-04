/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BadPosi.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfukuma <nfukuma@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 23:37:21 by nfukuma           #+#    #+#             */
/*   Updated: 2022/12/25 00:29:59 by nfukuma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BADPOSI_HPP
# define BADPOSI_HPP

# include <string>

class BadPosi
{
  private:
	std::string err_msg_;

  public:
	BadPosi(std::string err_msg);
	std::string what() const;
};

#endif
