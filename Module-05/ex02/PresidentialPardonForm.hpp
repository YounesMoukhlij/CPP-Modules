/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 16:52:02 by youmoukh          #+#    #+#             */
/*   Updated: 2024/10/03 17:44:40 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
	private:
		std::string target;
	public:
		PresidentialPardonForm(void);
		PresidentialPardonForm(const std::string);
		PresidentialPardonForm(const PresidentialPardonForm&);
		~PresidentialPardonForm(void);

		PresidentialPardonForm& operator= (const PresidentialPardonForm&);
		
		const std::string&	getTarget(void) const;
		void	PresidentialPardonFormAction(void) const;
		void	execute(Bureaucrat const & executor) const;
};


