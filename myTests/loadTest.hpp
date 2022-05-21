#include <string>
#include <list>

class	TestObj {

	private :

		std::string	testName;
		std::string	funcName;
		int			status;

	public :

		int			(*testFunc)();

		TestObj( std::string const &testName, std::string const & funcName, bool (*testFunc)() );

//accessors
		std::string const & getTestName();
		std::string const & getFuncName();
		int					getStatus();
//modifiers
		void				setTestName( std::string const & name );
		void				setFuncName( std::string const & name );
		void				setStatus( int stat );

};

void	loadTest( std::list< TestObj > & testList, std::string const & funcName, std::string const & testName, int (*testFunc)() );

void	checkIfTestCrashed( TestObj & currentTest );

void	forkAndTest( TestObj & currentTest );

void	launchTests( std::list< TestObj > & testList );
