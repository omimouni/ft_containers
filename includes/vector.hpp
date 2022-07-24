/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omimouni <omimouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 14:11:30 by omimouni          #+#    #+#             */
/*   Updated: 2022/07/24 14:11:57 by omimouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#ifndef __VECTOR_HPP__
#define __VECTOR_HPP__

# include <iostream>
# include <memory>
# include <vector>

class vector
{

public:
  // Types -------------------
  typedef std::vector<int>::iterator iterator;
  typedef std::allocator<int> allocator;

  typedef size_t size_type;

  //
  vector() : _size(0), _capacity(100)
  {
    _list = alloc.allocate(_capacity);
  }
  ~vector()
  {
    alloc.deallocate(_list, _capacity);
  }

  // Iterators -------------
  iterator begin()
  {
    return iterator(&_list[0]);
  }
  iterator end()
  {
    return iterator(&_list[_size]);
  }

  // Capacity --------------
  size_type size() const
  {
    return _size;
  }
  size_type capacity() const
  {
    return _capacity;
  }

  // Access Helpers --------
  int at(size_type n)
  {
    return _list[n];
  }

  void push_back(int t)
  {
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

#endif