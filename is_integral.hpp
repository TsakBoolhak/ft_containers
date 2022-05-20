#ifndef IS_INTEGRAL_HPP
# define IS_INTEGRAL_HPP

namespace ft {

	template < typename >
	struct is_integral_base {

		static bool const value = false;
	};

	template <>
	struct is_integral_base< bool > {

		static bool const value = true;
	};

	template <>
	struct is_integral_base< char > {

		static bool const value = true;
	};

	template <>
	struct is_integral_base< unsigned char > {

		static bool const value = true;
	};

	template <>
	struct is_integral_base< signed char > {

		static bool const value = true;
	};

	template <>
	struct is_integral_base< wchar_t > {

		static bool const value = true;
	};

	template <>
	struct is_integral_base< short int > {

		static bool const value = true;
	};

	template <>
	struct is_integral_base< unsigned short int > {

		static bool const value = true;
	};

	template <>
	struct is_integral_base< int > {

		static bool const value = true;
	};

	template <>
	struct is_integral_base< unsigned int > {

		static bool const value = true;
	};

	template <>
	struct is_integral_base< long int > {

		static bool const value = true;
	};

	template <>
	struct is_integral_base< unsigned long int > {

		static bool const value = true;
	};

	template <>
	struct is_integral_base< long long int > {

		static bool const value = true;
	};

	template <>
	struct is_integral_base< unsigned long long int > {

		static bool const value = true;
	};

	template< typename T >
	struct is_integral : is_integral_base< T > {};

}

#endif
