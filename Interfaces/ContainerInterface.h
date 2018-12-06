#ifndef CONTAINER_INTERFACE_H
#define CONTAINER_INTERFACE_H

template<class ItemType>
class ContainerInterface
{
 public:
  virtual void push_back(const ItemType & item);
  virtual void pop_back(void);
};

#endif
