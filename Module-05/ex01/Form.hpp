/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 18:06:15 by youmoukh          #+#    #+#             */
/*   Updated: 2024/10/01 18:09:10 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class From
{
	private:
		const std::string	_name;
		bool				_indicator;
		const int			_gradeSign;
		const int			_gradeExecut;
	public:
		~Form();
		Form();
		Form(const Form& origine);
		Form(const Form& origine);
		Form& operator=(const Form& origine);
		
};