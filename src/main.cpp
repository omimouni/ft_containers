/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omimouni <omimouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 12:22:13 by omimouni          #+#    #+#             */
/*   Updated: 2022/07/24 13:55:15 by omimouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <memory>

class vector2
{


public:
  // Types -------------------
  typedef std::vector<int>::iterator iterator;
  typedef std::allocator<int> allocator;

  typedef size_t size_type;
  
  //
  vector2() : _size(0), _capacity(100)
  {
    _list = alloc.allocate(_capacity);
  }
  ~vector2() {
    alloc.deallocate(_list, _capacity);
  }

  // Iterators -------------
  iterator begin() {
    return iterator(&_list[0]);
  }
  iterator end() {
    return iterator(&_list[_size]);
  }

  // Capacity --------------
  size_type size() const {
    return _size;
  }
  size_type capacity() const {
    return _capacity;
  }

  // Access Helpers --------
  int at(size_type n) {
    return _list[n];
  }

  void push_back(int t) {
    _list[_size++] = t;
  }

private:
  //
  int *_list;
  int _size;
  int _capacity;
  //
  allocator alloc;
};

int main(int argc, char const *argv[])
{
  vector2 v;

  v.push_back(10);
  v.push_back(1);
  v.push_back(2);
  v.push_back(50);

  vector2::iterator it;

  for (it = v.begin(); it != v.end(); it++)
  {
    std::cout << *it << std::endl;
  }
  
  return 0;
}
