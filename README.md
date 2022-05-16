# ft_containers
School project which objective is to reproduce some of C++ containers (vector, stack, map and set) and some other standard c++ stuff such as iterator_traits, reverse_iterators, enable_if, is_integral, equal, lexicographical_compare, std::pair and std::make_pair

TO DO in my RBT class:

✔️iterator begin();

✔️const_iterator begin() const;


✔️void clear();


✔️size_type count (const key_type& k) const;


✔️bool empty() const;


✔️iterator end();

✔️const_iterator end() const;


✔️pair<const_iterator,const_iterator> equal_range (const key_type& k) const;

✔️pair<iterator,iterator>             equal_range (const key_type& k);


✔️void erase (iterator position);

✔️size_type erase (const key_type& k);

✔️void erase (iterator first, iterator last);


✔️iterator find (const key_type& k);

✔️const_iterator find (const key_type& k) const;


✔️allocator_type get_allocator() const;


✔️pair<iterator,bool> insert (const value_type& val);

✔️iterator insert (iterator position, const value_type& val);

✔️void insert (InputIterator first, InputIterator last);


✔️key_compare key_comp() const;


✔️iterator lower_bound (const key_type& k);

✔️const_iterator lower_bound (const key_type& k) const;


❌size_type max_size() const;


❌RBTree& operator= (const map& x);


✔️reverse_iterator rbegin();

✔️const_reverse_iterator rbegin() const;


✔️reverse_iterator rend();

✔️const_reverse_iterator rend() const;


✔️size_type size() const;


❌void swap (map& x);


✔️iterator upper_bound (const key_type& k);

✔️const_iterator upper_bound (const key_type& k) const;
