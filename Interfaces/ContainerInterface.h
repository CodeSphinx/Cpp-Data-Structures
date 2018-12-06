#ifndef CONTAINER_INTERFACE_H
#define CONTAINER_INTERFACE_H

template<class ItemType>
class ContainerInterface
{
 public:
  /*
  */
  virtual void assign(void) = 0;
 
  /*
  */
  virtual void push_back(const ItemType & item) = 0;
 
  /*
  */
  virtual void pop_back(void) = 0;
};

#endif
