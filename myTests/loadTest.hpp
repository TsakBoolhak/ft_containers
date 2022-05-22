#include <string>
#include <list>

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
