#include <iostream>
#include <stdexcept>
#include <memory>

//#ifndef REAL_STD
//# define NAMESPACE ft
//# define VERSION "ft"
//# include "vector.hpp"

//# else
# define NAMESPACE std
# define VERSION "std"
# include <vector>
//#endif


int	main() {


	std::cout << "Testing namespace " << VERSION << std::endl;
	std::cout << "--------------------VECTOR----------------------" << std::endl;
	std::cout << "-----------DEFAULT CTOR-----------" << std::endl;
	NAMESPACE::vector<int> myVec;
	std::cout << "empty() : " << myVec.empty() << std::endl;
	std::cout << "capacity() : " << myVec.capacity() << std::endl;
	std::cout << "size() : " << myVec.size() << std::endl;
	std::cout << "at( 0 ) : ";
	try {

		std::cout << myVec.at( 0 );
	} catch ( std::out_of_range const & e ) {
		std::cout << e.what();
	}
	std::cout << std::endl;

	std::cout << std::endl;

	{
		NAMESPACE::vector<int>::iterator it = myVec.begin();
		myVec.push_back( 42 );
		std::cout << "push_back( 42 );" << std::endl;
		std::cout << "empty() : " << myVec.empty() << std::endl;
		std::cout << "capacity() : " << myVec.capacity() << std::endl;
		std::cout << "size() : " << myVec.size() << std::endl;
		std::cout << "*(begin()) : " << *( myVec.begin() ) << std::endl;
		std::cout << "*(rbegin()) : " << *( myVec.rbegin() ) << std::endl;
		std::cout << "front() : " << myVec.front() << std::endl;
		std::cout << "back() : " << myVec.back() << std::endl;
		std::cout << "at( 0 ) : " << myVec.at( 0 ) << std::endl;
		std::cout << "Reallocation happened ?  --> ";
		it != myVec.begin() ? std::cout << "yes" : std::cout << "no";
		std::cout << std::endl;
	}
	std::cout << "at( 1 ) : ";
	try {

		std::cout << myVec.at( 1 );
	} catch ( std::out_of_range const & e ) {
		std::cout << e.what();
	}
	std::cout << std::endl;
	std::cout << "[0] : " << myVec[0] << std::endl;

	std::cout << std::endl;

	{
		NAMESPACE::vector<int>::iterator it = myVec.begin();
		myVec.push_back( 101010 );
		std::cout << "push_back( 101010 );" << std::endl;
		std::cout << "empty() : " << myVec.empty() << std::endl;
		std::cout << "capacity() : " << myVec.capacity() << std::endl;
		std::cout << "size() : " << myVec.size() << std::endl;
		std::cout << "*(begin()) : " << *( myVec.begin() ) << std::endl;
		std::cout << "*(rbegin()) : " << *( myVec.rbegin() ) << std::endl;
		std::cout << "front() : " << myVec.front() << std::endl;
		std::cout << "back() : " << myVec.back() << std::endl;
		std::cout << "at( 0 ) : " << myVec.at( 0 ) << std::endl;
		std::cout << "at( 1 ) : " << myVec.at( 1 ) << std::endl;
		std::cout << "Reallocation happened ?  --> ";
		it != myVec.begin() ? std::cout << "yes" : std::cout << "no";
		std::cout << std::endl;
	}
	std::cout << "at( 2 ) : ";
	try {

		std::cout << myVec.at( 2 );
	} catch ( std::out_of_range const & e ) {
		std::cout << e.what();
	}
	std::cout << std::endl;
	std::cout << "[0] : " << myVec[0] << std::endl;
	std::cout << "[1] : " << myVec[1] << std::endl;

	std::cout << std::endl;

	for (unsigned int i = 0 ; i <= 10 ; i++ ) {

	{
		NAMESPACE::vector<int>::iterator it = myVec.begin();
		myVec.push_back( i );
		std::cout << "push_back( " << i << " );" << std::endl;
		std::cout << "empty() : " << myVec.empty() << std::endl;
		std::cout << "capacity() : " << myVec.capacity() << std::endl;
		std::cout << "size() : " << myVec.size() << std::endl;
		std::cout << "*(begin()) : " << *( myVec.begin() ) << std::endl;
		std::cout << "*(rbegin()) : " << *( myVec.rbegin() ) << std::endl;
		std::cout << "front() : " << myVec.front() << std::endl;
		std::cout << "back() : " << myVec.back() << std::endl;
		std::cout << "Reallocation happened ?  --> ";
		it != myVec.begin() ? std::cout << "yes" : std::cout << "no";
		std::cout << std::endl;
	}
		try {

			for ( NAMESPACE::vector<int>::size_type j = 0 ; j <= myVec.size() ; j++ )
				std::cout << "at( " << j << " ) : " << myVec.at( j ) << std::endl;
		} catch ( std::out_of_range const & e ) {
			std::cout << e.what() << std::endl;
		}
		for ( NAMESPACE::vector<int>::size_type j = 0 ; j < myVec.size() ; j++ )
			std::cout << "[" << j << "] : " << myVec[j] << std::endl;
		std::cout << std::endl;
	}

	std::cout << "-----------COPY CTOR-----------" << std::endl;
	NAMESPACE::vector<int> myCopyVec( myVec );
	std::cout << "empty() : " << myCopyVec.empty() << std::endl;
	std::cout << "capacity() : " << myCopyVec.capacity() << std::endl;
	std::cout << "size() : " << myCopyVec.size() << std::endl;
	std::cout << "*(begin()) : " << *( myVec.begin() ) << std::endl;
	std::cout << "*(rbegin()) : " << *( myCopyVec.rbegin() ) << std::endl;
	std::cout << "front() : " << myCopyVec.front() << std::endl;
	std::cout << "back() : " << myCopyVec.back() << std::endl;
	std::cout << "testing iterators to check content of the vec constructed by copy" << std::endl;
	for ( NAMESPACE::vector<int>::iterator it = myCopyVec.begin() ; it < myCopyVec.end() ; ++it )
		std::cout << *it << std::endl;

	std::cout << std::endl;

	{
		NAMESPACE::vector<int>::iterator it = myVec.begin();
		myVec.clear();
		std::cout << "myVec.clear()" << std::endl;
		std::cout << "empty() : " << myVec.empty() << std::endl;
		std::cout << "capacity() : " << myVec.capacity() << std::endl;
		std::cout << "size() : " << myVec.size() << std::endl;
		std::cout << "Reallocation happened ?  --> ";
		it != myVec.begin() ? std::cout << "yes" : std::cout << "no";
		std::cout << std::endl;
	}
	try {

		for ( NAMESPACE::vector<int>::size_type j = 0 ; j <= myVec.size() ; j++ )
			std::cout << "at( " << j << " ) : " << myVec.at( j ) << std::endl;
	} catch ( std::out_of_range const & e ) {
		std::cout << e.what() << std::endl;
	}
	for ( NAMESPACE::vector<int>::size_type j = 0 ; j < myVec.size() ; j++ )
		std::cout << "[" << j << "] : " << myVec[j] << std::endl;
	std::cout << std::endl;
	
	{
		NAMESPACE::vector<int>::iterator it = myVec.begin();
		myVec.reserve( 5 );
		std::cout << "myVec.reserve( 5 );" << std::endl;
		std::cout << "empty() : " << myVec.empty() << std::endl;
		std::cout << "capacity() : " << myVec.capacity() << std::endl;
		std::cout << "size() : " << myVec.size() << std::endl;
		std::cout << "Reallocation happened ?  --> ";
		it != myVec.begin() ? std::cout << "yes" : std::cout << "no";
		std::cout << std::endl;
	}
	try {

		for ( NAMESPACE::vector<int>::size_type j = 0 ; j <= myVec.size() ; j++ )
			std::cout << "at( " << j << " ) : " << myVec.at( j ) << std::endl;
	} catch ( std::out_of_range const & e ) {
		std::cout << e.what() << std::endl;
	}
	for ( NAMESPACE::vector<int>::size_type j = 0 ; j < myVec.size() ; j++ )
		std::cout << "[" << j << "] : " << myVec[j] << std::endl;
	std::cout << std::endl;

	{
		NAMESPACE::vector<int>::iterator it = myVec.begin();
		myVec.resize( 5 );
		std::cout << "myVec.resize( 5 );" << std::endl;
		std::cout << "empty() : " << myVec.empty() << std::endl;
		std::cout << "capacity() : " << myVec.capacity() << std::endl;
		std::cout << "size() : " << myVec.size() << std::endl;
		std::cout << "Reallocation happened ?  --> ";
		it != myVec.begin() ? std::cout << "yes" : std::cout << "no";
		std::cout << std::endl;
	}
	try {

		for ( NAMESPACE::vector<int>::size_type j = 0 ; j <= myVec.size() ; j++ )
			std::cout << "at( " << j << " ) : " << myVec.at( j ) << std::endl;
	} catch ( std::out_of_range const & e ) {
		std::cout << e.what() << std::endl;
	}
	for ( NAMESPACE::vector<int>::size_type j = 0 ; j < myVec.size() ; j++ )
		std::cout << "[" << j << "] : " << myVec[j] << std::endl;
	std::cout << std::endl;

	{
		NAMESPACE::vector<int>::iterator it = myVec.begin();
		myVec.resize( 2, 42 );
		std::cout << "myVec.resize( 2, 42 );" << std::endl;
		std::cout << "empty() : " << myVec.empty() << std::endl;
		std::cout << "capacity() : " << myVec.capacity() << std::endl;
		std::cout << "size() : " << myVec.size() << std::endl;
		std::cout << "Reallocation happened ?  --> ";
		it != myVec.begin() ? std::cout << "yes" : std::cout << "no";
		std::cout << std::endl;
	}
	try {

		for ( NAMESPACE::vector<int>::size_type j = 0 ; j <= myVec.size() ; j++ )
			std::cout << "at( " << j << " ) : " << myVec.at( j ) << std::endl;
	} catch ( std::out_of_range const & e ) {
		std::cout << e.what() << std::endl;
	}
	for ( NAMESPACE::vector<int>::size_type j = 0 ; j < myVec.size() ; j++ )
		std::cout << "[" << j << "] : " << myVec[j] << std::endl;
	std::cout << std::endl;

	{
		NAMESPACE::vector<int>::iterator it = myVec.begin();
		myVec.resize( 10, 42 );
		std::cout << "myVec.resize( 10, 42 );" << std::endl;
		std::cout << "empty() : " << myVec.empty() << std::endl;
		std::cout << "capacity() : " << myVec.capacity() << std::endl;
		std::cout << "size() : " << myVec.size() << std::endl;
		std::cout << "Reallocation happened ?  --> ";
		it != myVec.begin() ? std::cout << "yes" : std::cout << "no";
		std::cout << std::endl;
	}
	try {

		for ( NAMESPACE::vector<int>::size_type j = 0 ; j <= myVec.size() ; j++ )
			std::cout << "at( " << j << " ) : " << myVec.at( j ) << std::endl;
	} catch ( std::out_of_range const & e ) {
		std::cout << e.what() << std::endl;
	}
	for ( NAMESPACE::vector<int>::size_type j = 0 ; j < myVec.size() ; j++ )
		std::cout << "[" << j << "] : " << myVec[j] << std::endl;
	std::cout << std::endl;

	{
		NAMESPACE::vector<int>::iterator it = myVec.begin();
		myVec.reserve( 10 );
		std::cout << "myVec.reserve( 10 );" << std::endl;
		std::cout << "empty() : " << myVec.empty() << std::endl;
		std::cout << "capacity() : " << myVec.capacity() << std::endl;
		std::cout << "size() : " << myVec.size() << std::endl;
		std::cout << "Reallocation happened ?  --> ";
		it != myVec.begin() ? std::cout << "yes" : std::cout << "no";
		std::cout << std::endl;
	}
	try {

		for ( NAMESPACE::vector<int>::size_type j = 0 ; j <= myVec.size() ; j++ )
			std::cout << "at( " << j << " ) : " << myVec.at( j ) << std::endl;
	} catch ( std::out_of_range const & e ) {
		std::cout << e.what() << std::endl;
	}
	for ( NAMESPACE::vector<int>::size_type j = 0 ; j < myVec.size() ; j++ )
		std::cout << "[" << j << "] : " << myVec[j] << std::endl;
	std::cout << std::endl;

	{
		NAMESPACE::vector<int>::iterator it = myVec.begin();
		myVec.resize( 16, 101010 );
		std::cout << "myVec.resize( 16, 101010 );" << std::endl;
		std::cout << "empty() : " << myVec.empty() << std::endl;
		std::cout << "capacity() : " << myVec.capacity() << std::endl;
		std::cout << "size() : " << myVec.size() << std::endl;
		std::cout << "Reallocation happened ?  --> ";
		it != myVec.begin() ? std::cout << "yes" : std::cout << "no";
		std::cout << std::endl;
	}
	try {

		for ( NAMESPACE::vector<int>::size_type j = 0 ; j <= myVec.size() ; j++ )
			std::cout << "at( " << j << " ) : " << myVec.at( j ) << std::endl;
	} catch ( std::out_of_range const & e ) {
		std::cout << e.what() << std::endl;
	}
	for ( NAMESPACE::vector<int>::size_type j = 0 ; j < myVec.size() ; j++ )
		std::cout << "[" << j << "] : " << myVec[j] << std::endl;
	std::cout << std::endl;

	{
		NAMESPACE::vector<int>::iterator it = myVec.begin();
		myVec.resize( 18, 33 );
		std::cout << "myVec.resize( 18, 33 );" << std::endl;
		std::cout << "empty() : " << myVec.empty() << std::endl;
		std::cout << "capacity() : " << myVec.capacity() << std::endl;
		std::cout << "size() : " << myVec.size() << std::endl;
		std::cout << "Reallocation happened ?  --> ";
		it != myVec.begin() ? std::cout << "yes" : std::cout << "no";
		std::cout << std::endl;
	}
	try {

		for ( NAMESPACE::vector<int>::size_type j = 0 ; j <= myVec.size() ; j++ )
			std::cout << "at( " << j << " ) : " << myVec.at( j ) << std::endl;
	} catch ( std::out_of_range const & e ) {
		std::cout << e.what() << std::endl;
	}
	for ( NAMESPACE::vector<int>::size_type j = 0 ; j < myVec.size() ; j++ )
		std::cout << "[" << j << "] : " << myVec[j] << std::endl;
	std::cout << std::endl;

	{
		NAMESPACE::vector<int>::iterator it = myVec.begin();
		myVec.reserve( 32 );
		std::cout << "myVec.reserve( 32 );" << std::endl;
		std::cout << "empty() : " << myVec.empty() << std::endl;
		std::cout << "capacity() : " << myVec.capacity() << std::endl;
		std::cout << "size() : " << myVec.size() << std::endl;
		std::cout << "Reallocation happened ?  --> ";
		it != myVec.begin() ? std::cout << "yes" : std::cout << "no";
		std::cout << std::endl;
	}
	try {

		for ( NAMESPACE::vector<int>::size_type j = 0 ; j <= myVec.size() ; j++ )
			std::cout << "at( " << j << " ) : " << myVec.at( j ) << std::endl;
	} catch ( std::out_of_range const & e ) {
		std::cout << e.what() << std::endl;
	}
	for ( NAMESPACE::vector<int>::size_type j = 0 ; j < myVec.size() ; j++ )
		std::cout << "[" << j << "] : " << myVec[j] << std::endl;
	std::cout << std::endl;

	{
		NAMESPACE::vector<int>::iterator it = myVec.begin();
		myVec.reserve( 34 );
		std::cout << "myVec.reserve( 34 );" << std::endl;
		std::cout << "empty() : " << myVec.empty() << std::endl;
		std::cout << "capacity() : " << myVec.capacity() << std::endl;
		std::cout << "size() : " << myVec.size() << std::endl;
		std::cout << "Reallocation happened ?  --> ";
		it != myVec.begin() ? std::cout << "yes" : std::cout << "no";
		std::cout << std::endl;
	}
	try {

		for ( NAMESPACE::vector<int>::size_type j = 0 ; j <= myVec.size() ; j++ )
			std::cout << "at( " << j << " ) : " << myVec.at( j ) << std::endl;
	} catch ( std::out_of_range const & e ) {
		std::cout << e.what() << std::endl;
	}
	for ( NAMESPACE::vector<int>::size_type j = 0 ; j < myVec.size() ; j++ )
		std::cout << "[" << j << "] : " << myVec[j] << std::endl;
	std::cout << std::endl;

	{
		NAMESPACE::vector<int>::iterator it = myVec.begin();
		myVec.resize( 36, -42 );
		std::cout << "myVec.resize( 42, -42 );" << std::endl;
		std::cout << "empty() : " << myVec.empty() << std::endl;
		std::cout << "capacity() : " << myVec.capacity() << std::endl;
		std::cout << "size() : " << myVec.size() << std::endl;
		std::cout << "Reallocation happened ?  --> ";
		it != myVec.begin() ? std::cout << "yes" : std::cout << "no";
		std::cout << std::endl;
	}
	try {

		for ( NAMESPACE::vector<int>::size_type j = 0 ; j <= myVec.size() ; j++ )
			std::cout << "at( " << j << " ) : " << myVec.at( j ) << std::endl;
	} catch ( std::out_of_range const & e ) {
		std::cout << e.what() << std::endl;
	}
	for ( NAMESPACE::vector<int>::size_type j = 0 ; j < myVec.size() ; j++ )
		std::cout << "[" << j << "] : " << myVec[j] << std::endl;
	std::cout << std::endl;

	{
		NAMESPACE::vector<int>::iterator it = myVec.begin();
		myVec.resize( 64, -101010 );
		std::cout << "myVec.resize( 64, -101010 );" << std::endl;
		std::cout << "empty() : " << myVec.empty() << std::endl;
		std::cout << "capacity() : " << myVec.capacity() << std::endl;
		std::cout << "size() : " << myVec.size() << std::endl;
		std::cout << "Reallocation happened ?  --> ";
		it != myVec.begin() ? std::cout << "yes" : std::cout << "no";
		std::cout << std::endl;
	}
	try {

		for ( NAMESPACE::vector<int>::size_type j = 0 ; j <= myVec.size() ; j++ )
			std::cout << "at( " << j << " ) : " << myVec.at( j ) << std::endl;
	} catch ( std::out_of_range const & e ) {
		std::cout << e.what() << std::endl;
	}
	for ( NAMESPACE::vector<int>::size_type j = 0 ; j < myVec.size() ; j++ )
		std::cout << "[" << j << "] : " << myVec[j] << std::endl;
	std::cout << std::endl;

	{
		NAMESPACE::vector<int>::iterator it = myVec.begin();
		myVec.resize( 72, -33 );
		std::cout << "myVec.resize( 72, -33 );" << std::endl;
		std::cout << "empty() : " << myVec.empty() << std::endl;
		std::cout << "capacity() : " << myVec.capacity() << std::endl;
		std::cout << "size() : " << myVec.size() << std::endl;
		std::cout << "Reallocation happened ?  --> ";
		it != myVec.begin() ? std::cout << "yes" : std::cout << "no";
		std::cout << std::endl;
	}
	try {

		for ( NAMESPACE::vector<int>::size_type j = 0 ; j <= myVec.size() ; j++ )
			std::cout << "at( " << j << " ) : " << myVec.at( j ) << std::endl;
	} catch ( std::out_of_range const & e ) {
		std::cout << e.what() << std::endl;
	}
	for ( NAMESPACE::vector<int>::size_type j = 0 ; j < myVec.size() ; j++ )
		std::cout << "[" << j << "] : " << myVec[j] << std::endl;
	std::cout << std::endl;

	{
		NAMESPACE::vector<int>::iterator it = myVec.begin();
		myVec.resize( 145, 3 );
		std::cout << "myVec.resize( 145, 3 );" << std::endl;
		std::cout << "empty() : " << myVec.empty() << std::endl;
		std::cout << "capacity() : " << myVec.capacity() << std::endl;
		std::cout << "size() : " << myVec.size() << std::endl;
		std::cout << "Reallocation happened ?  --> ";
		it != myVec.begin() ? std::cout << "yes" : std::cout << "no";
		std::cout << std::endl;
	}
	try {

		for ( NAMESPACE::vector<int>::size_type j = 0 ; j <= myVec.size() ; j++ )
			std::cout << "at( " << j << " ) : " << myVec.at( j ) << std::endl;
	} catch ( std::out_of_range const & e ) {
		std::cout << e.what() << std::endl;
	}
	for ( NAMESPACE::vector<int>::size_type j = 0 ; j < myVec.size() ; j++ )
		std::cout << "[" << j << "] : " << myVec[j] << std::endl;
	std::cout << std::endl;

	myVec.reserve( 150 );
	{
		NAMESPACE::vector<int>::iterator it = myCopyVec.begin();
		myCopyVec = myVec;
		std::cout << "myVec.reserve( 150 );" << std::endl << "myCopyVec = myVec;" << std::endl;
		std::cout << "myCopyVec.empty() : " << myCopyVec.empty() << std::endl;
		std::cout << "myVec.capacity() : " << myVec.capacity() << std::endl;
		std::cout << "myCopyVec.capacity() : " << myCopyVec.capacity() << std::endl;
		std::cout << "myCopyVec.size() : " << myCopyVec.size() << std::endl;
		std::cout << "Reallocation happened ?  --> ";
		it != myVec.begin() ? std::cout << "yes" : std::cout << "no";
		std::cout << std::endl;
	}
	try {

		for ( NAMESPACE::vector<int>::size_type j = 0 ; j <= myCopyVec.size() ; j++ )
			std::cout << "myCopyVec.at( " << j << " ) : " << myCopyVec.at( j ) << std::endl;
	} catch ( std::out_of_range const & e ) {
		std::cout << e.what() << std::endl;
	}
	for ( NAMESPACE::vector<int>::size_type j = 0 ; j < myCopyVec.size() ; j++ )
		std::cout << "myCopyVec[" << j << "] : " << myCopyVec[j] << std::endl;
	std::cout << std::endl;

	NAMESPACE::vector<int>	myOtherVec ( myCopyVec.begin(), myCopyVec.begin() + 5, std::allocator<int>() );
	std::cout << "myOtherVec ( myCopyVec.begin(), myCopyVec.begin() + 5 );" << std::endl;
	std::cout << "myOtherVec.empty() : " << myOtherVec.empty() << std::endl;
	std::cout << "myOtherVec.capacity() : " << myOtherVec.capacity() << std::endl;
	std::cout << "myOtherVec.size() : " << myOtherVec.size() << std::endl;
	try {

		for ( NAMESPACE::vector<int>::size_type j = 0 ; j <= myOtherVec.size() ; j++ )
			std::cout << "myOtherVec.at( " << j << " ) : " << myOtherVec.at( j ) << std::endl;
	} catch ( std::out_of_range const & e ) {
		std::cout << e.what() << std::endl;
	}
	for ( NAMESPACE::vector<int>::size_type j = 0 ; j < myOtherVec.size() ; j++ )
		std::cout << "myOtherVec[" << j << "] : " << myOtherVec[j] << std::endl;
	std::cout << std::endl;
	
	NAMESPACE::vector<int>	myThirdVec ( 10, 42 );
	std::cout << "myThirdVec ( 10, 42 );" << std::endl;
	std::cout << "myThirdVec.empty() : " << myThirdVec.empty() << std::endl;
	std::cout << "myThirdVec.capacity() : " << myThirdVec.capacity() << std::endl;
	std::cout << "myThirdVec.size() : " << myThirdVec.size() << std::endl;
	try {

		for ( NAMESPACE::vector<int>::size_type j = 0 ; j <= myThirdVec.size() ; j++ )
			std::cout << "myThirdVec.at( " << j << " ) : " << myThirdVec.at( j ) << std::endl;
	} catch ( std::out_of_range const & e ) {
		std::cout << e.what() << std::endl;
	}
	for ( NAMESPACE::vector<int>::size_type j = 0 ; j < myThirdVec.size() ; j++ )
		std::cout << "myThirdVec[" << j << "] : " << myThirdVec[j] << std::endl;
	std::cout << std::endl;
	
	myOtherVec = myThirdVec;
	std::cout << "myOtherVec = myThirdVec;" << std::endl;
	std::cout << "myOtherVec.empty() : " << myOtherVec.empty() << std::endl;
	std::cout << "myOtherVec.capacity() : " << myOtherVec.capacity() << std::endl;
	std::cout << "myOtherVec.size() : " << myOtherVec.size() << std::endl;
	try {

		for ( NAMESPACE::vector<int>::size_type j = 0 ; j <= myOtherVec.size() ; j++ )
			std::cout << "myOtherVec.at( " << j << " ) : " << myOtherVec.at( j ) << std::endl;
	} catch ( std::out_of_range const & e ) {
		std::cout << e.what() << std::endl;
	}
	for ( NAMESPACE::vector<int>::size_type j = 0 ; j < myOtherVec.size() ; j++ )
		std::cout << "myOtherVec[" << j << "] : " << myOtherVec[j] << std::endl;
	std::cout << std::endl;

	NAMESPACE::vector<int>::iterator itCopy = myCopyVec.begin();
	NAMESPACE::vector<int>::const_iterator itConst( itCopy );
	return 0;
}
