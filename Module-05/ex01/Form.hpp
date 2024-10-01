/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 18:06:15 by youmoukh          #+#    #+#             */
/*   Updated: 2024/10/01 18:15:38 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Form
{
	private:
		const std::string	_name;
		bool				_indicator;
		const int			_gradeSign;
		const int			_gradeExecut;
	public:
		~Form();
		Form(const std::string name);
		Form(const Form& origine);
		Form& operator=(const Form& origine);
		
		void	beSigned() const;
		
};

std::ostream& operator<<(std::ostream& file, const From& from);