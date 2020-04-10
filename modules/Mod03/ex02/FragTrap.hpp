/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: henri <henri@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/10 15:34:36 by henri             #+#    #+#             */
/*   Updated: 2020/04/11 00:08:17 by henri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAG_TRAP_HPP
# define FRAG_TRAP_HPP

# include <iostream>
# include <string>

/* Une classe peut avoir plus d'un parent */
/* Pourquoi l'héeitage virtual ? = https://cpp.developpez.com/faq/cpp/?page=L-heritage */
/*
Soit une classe A1 et une classe A2 qui hérite de la classe Z
Si on a une classe B qui hérite de A1 et A2, la classe Z va être dupliquée dans B
Le mot clé virtual permettra de ne garder qu'un objet de classe Z
*/

class FragTrap: {

	public:
		FragTrap(std::string const & name);
		FragTrap(FragTrap const & obj);
		~FragTrap();
		FragTrap &operator=(FragTrap const & obj);

		void rangedAttack(std::string const & target);
		void meleeAttack(std::string const & target);
		void vaulthunter_dot_exe(std::string const & target);
	protected:

	private:
		FragTrap();
};

#endif
