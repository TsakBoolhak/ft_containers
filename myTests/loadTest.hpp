#include <string>
#include <list>

#define COLOR_DEFAULT "\e[0m"
#define COLOR_YELLOW "\e[0;33m"
#define COLOR_BLUE "\e[0;34m"
#define COLOR_GREEN "\e[0;32m"
#define COLOR_RED "\e[0;31m"

class	TestObj {

	private :

		std::string	testName;
		std::string	funcName;
		int			status;

	public :

		int			(*testFunc)();

		TestObj( std::string const &testName, std::string const & funcName, int (*testFunc)() );

//accessors
		std::string const & getTestName() const;
		std::string const & getFuncName() const;
		int					getStatus() const;
//modifiers
		void				setTestName( std::string const & name );
		void				setFuncName( std::string const & name );
		void				setStatus( int stat );

};

void	loadTest( std::list< TestObj > & testList, std::string const & funcName, std::string const & testName, int (*testFunc)() );

void	checkIfTestCrashed( TestObj & currentTest );

void	forkAndTest( TestObj & currentTest );

void	launchTests( std::list< TestObj > & testList );
