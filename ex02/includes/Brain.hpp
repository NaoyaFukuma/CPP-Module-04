/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfukuma <nfukuma@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 23:04:03 by nfukuma           #+#    #+#             */
/*   Updated: 2022/12/25 00:25:41 by nfukuma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <string>
#include "BadPosi.hpp"

class Brain
{
  protected:
	std::string ideas_[100];

  public:
	Brain();
	Brain(Brain &_Brain);
	Brain &operator=(Brain &_Brain);
	virtual ~Brain();

	void set_idea(const int i, const std::string &_ideas);
	void set_ideas(const int begin, const int size, const std::string *_ideas);
	std::string get_idea(const int i) const;
	void dup_ideas(const Brain &_brain);
};

#endif
