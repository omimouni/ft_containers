/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omimouni <omimouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 12:22:13 by omimouni          #+#    #+#             */
/*   Updated: 2022/07/24 13:03:05 by omimouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <memory>

class vector2
{
  private:
    std::allocator<int> alloc;
    int size;
    int *storage;

  public:
    vector2() {
      storage = alloc.allocate(10);
      size = 0;
    }
    ~vector2() {
      alloc.deallocate(storage, 10);
    }

    int at(int i)
    {
      return storage[i];
    }

    void push_back(int elem)
    {
      storage[size++] = elem;
    }
};

int main(int argc, char const *argv[])
{
  vector2 v;
  
  v.push_back(10);

  std::cout << v.at(0) << std::endl;

  return 0;
}
