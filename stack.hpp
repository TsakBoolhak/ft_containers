#ifndef STACK_HPP
# define STACK_HPP

# include "vector.hpp"

namespace ft {

	template< class T, class Container = ft::vector< T > >
	class stack {

		public :

			typedef typename Container::value_type	value_type;
			typedef typename Container::size_type	size_type;
			typedef	Container	container_type;

		protected :

			Container c;

		public :

			explicit stack( const Container & contain = Container() ) : c ( contain ) {

				return ;
			}

			bool	empty() const {

				return c.empty();
			}

			size_type	size() const {

				return c.size();
			}

			value_type &	top() {

				return c.back();
			}

			const value_type & top() const {

				return c.back();
			}

			void	push( const value_type & x ) {

				c.push_back(x);
			}

			void	pop() {

				c.pop_back();
			}

			friend bool	operator==( stack< T, Container > const & x, stack< T, Container > const & y) {

				return x.c == y.c;
			}

			friend bool	operator!=( stack< T, Container > const & x, stack< T, Container > const & y) {

				return x.c != y.c;
			}

			friend bool	operator<=( stack< T, Container > const & x, stack< T, Container > const & y) {

				return x.c <= y.c;
			}

			friend bool	operator>=( stack< T, Container > const & x, stack< T, Container > const & y) {

				return x.c >= y.c;
			}

			friend bool	operator<( stack< T, Container > const & x, stack< T, Container > const & y) {

				return x.c < y.c;
			}

			friend bool	operator>( stack< T, Container > const & x, stack< T, Container > const & y) {

				return x.c > y.c;
			}
	};

}

#endif
