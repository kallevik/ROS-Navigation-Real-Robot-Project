// Generated by gencpp from file my_turtlebot_navigation/MyServiceMessageRequest.msg
// DO NOT EDIT!


#ifndef MY_TURTLEBOT_NAVIGATION_MESSAGE_MYSERVICEMESSAGEREQUEST_H
#define MY_TURTLEBOT_NAVIGATION_MESSAGE_MYSERVICEMESSAGEREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace my_turtlebot_navigation
{
template <class ContainerAllocator>
struct MyServiceMessageRequest_
{
  typedef MyServiceMessageRequest_<ContainerAllocator> Type;

  MyServiceMessageRequest_()
    : label()  {
    }
  MyServiceMessageRequest_(const ContainerAllocator& _alloc)
    : label(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _label_type;
  _label_type label;





  typedef boost::shared_ptr< ::my_turtlebot_navigation::MyServiceMessageRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::my_turtlebot_navigation::MyServiceMessageRequest_<ContainerAllocator> const> ConstPtr;

}; // struct MyServiceMessageRequest_

typedef ::my_turtlebot_navigation::MyServiceMessageRequest_<std::allocator<void> > MyServiceMessageRequest;

typedef boost::shared_ptr< ::my_turtlebot_navigation::MyServiceMessageRequest > MyServiceMessageRequestPtr;
typedef boost::shared_ptr< ::my_turtlebot_navigation::MyServiceMessageRequest const> MyServiceMessageRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::my_turtlebot_navigation::MyServiceMessageRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::my_turtlebot_navigation::MyServiceMessageRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::my_turtlebot_navigation::MyServiceMessageRequest_<ContainerAllocator1> & lhs, const ::my_turtlebot_navigation::MyServiceMessageRequest_<ContainerAllocator2> & rhs)
{
  return lhs.label == rhs.label;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::my_turtlebot_navigation::MyServiceMessageRequest_<ContainerAllocator1> & lhs, const ::my_turtlebot_navigation::MyServiceMessageRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace my_turtlebot_navigation

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::my_turtlebot_navigation::MyServiceMessageRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::my_turtlebot_navigation::MyServiceMessageRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::my_turtlebot_navigation::MyServiceMessageRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::my_turtlebot_navigation::MyServiceMessageRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::my_turtlebot_navigation::MyServiceMessageRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::my_turtlebot_navigation::MyServiceMessageRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::my_turtlebot_navigation::MyServiceMessageRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ea23f97416b04c6151d2b576c0665ac1";
  }

  static const char* value(const ::my_turtlebot_navigation::MyServiceMessageRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xea23f97416b04c61ULL;
  static const uint64_t static_value2 = 0x51d2b576c0665ac1ULL;
};

template<class ContainerAllocator>
struct DataType< ::my_turtlebot_navigation::MyServiceMessageRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "my_turtlebot_navigation/MyServiceMessageRequest";
  }

  static const char* value(const ::my_turtlebot_navigation::MyServiceMessageRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::my_turtlebot_navigation::MyServiceMessageRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# request\n"
"string label\n"
;
  }

  static const char* value(const ::my_turtlebot_navigation::MyServiceMessageRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::my_turtlebot_navigation::MyServiceMessageRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.label);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct MyServiceMessageRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::my_turtlebot_navigation::MyServiceMessageRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::my_turtlebot_navigation::MyServiceMessageRequest_<ContainerAllocator>& v)
  {
    s << indent << "label: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.label);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MY_TURTLEBOT_NAVIGATION_MESSAGE_MYSERVICEMESSAGEREQUEST_H
