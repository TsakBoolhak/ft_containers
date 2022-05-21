#include "loadTest.hpp"
#include "vector.hpp"

#define NAMESPACE ft
#ifdef STD
# define NAMESPACE std
#endif

void	vector_launcher() {

	list< TestObj > testList;

	loadTest(testList, "test1", "lol", &lol);
	launchTests(testList);
}
