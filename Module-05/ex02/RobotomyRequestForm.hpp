/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 16:51:42 by youmoukh          #+#    #+#             */
/*   Updated: 2024/10/03 17:59:00 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AForm.hpp"


class RobotomyRequestForm : public AForm
{
	private:
		std::string	target;
	public:
		RobotomyRequestForm(void);
		RobotomyRequestForm(const std::string);
		RobotomyRequestForm(const RobotomyRequestForm&);
		~RobotomyRequestForm();

		RobotomyRequestForm& operator= (const RobotomyRequestForm&);

		const std::string&	getTarget(void) const;
		
		void	RobotomyRequestFormAction(void) const;
		void	execute(const Bureaucrat & bur) const;
};
