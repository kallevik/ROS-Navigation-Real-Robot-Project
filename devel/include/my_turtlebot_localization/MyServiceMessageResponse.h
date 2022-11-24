// Generated by gencpp from file my_turtlebot_localization/MyServiceMessageResponse.msg
// DO NOT EDIT!


#ifndef MY_TURTLEBOT_LOCALIZATION_MESSAGE_MYSERVICEMESSAGERESPONSE_H
#define MY_TURTLEBOT_LOCALIZATION_MESSAGE_MYSERVICEMESSAGERESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace my_turtlebot_localization
{
template <class ContainerAllocator>
struct MyServiceMessageResponse_
{
  typedef MyServiceMessageResponse_<ContainerAllocator> Type;

  MyServiceMessageResponse_()
    : navigation_successfull(false)
    , message()  {
    }
  MyServiceMessageResponse_(const ContainerAllocator& _alloc)
    : navigation_successfull(false)
    , message(_alloc)  {
  (void)_alloc;
    }



   typedef uint8_t _navigation_successfull_type;
  _navigation_successfull_type navigation_successfull;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _message_type;
  _message_type message;





  typedef boost::shared_ptr< ::my_turtlebot_localization::MyServiceMessageResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::my_turtlebot_localization::MyServiceMessageResponse_<ContainerAllocator> const> ConstPtr;

}; // struct MyServiceMessageResponse_

typedef ::my_turtlebot_localization::MyServiceMessageResponse_<std::allocator<void> > MyServiceMessageResponse;

typedef boost::shared_ptr< ::my_turtlebot_localization::MyServiceMessageResponse > MyServiceMessageResponsePtr;
typedef boost::shared_ptr< ::my_turtlebot_localization::MyServiceMessageResponse const> MyServiceMessageResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::my_turtlebot_localization::MyServiceMessageResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::my_turtlebot_localization::MyServiceMessageResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::my_turtlebot_localization::MyServiceMessageResponse_<ContainerAllocator1> & lhs, const ::my_turtlebot_localization::MyServiceMessageResponse_<ContainerAllocator2> & rhs)
{
  return lhs.navigation_successfull == rhs.navigation_successfull &&
    lhs.message == rhs.message;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::my_turtlebot_localization::MyServiceMessageResponse_<ContainerAllocator1> & lhs, const ::my_turtlebot_localization::MyServiceMessageResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace my_turtlebot_localization

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::my_turtlebot_localization::MyServiceMessageResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::my_turtlebot_localization::MyServiceMessageResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::my_turtlebot_localization::MyServiceMessageResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::my_turtlebot_localization::MyServiceMessageResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::my_turtlebot_localization::MyServiceMessageResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::my_turtlebot_localization::MyServiceMessageResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::my_turtlebot_localization::MyServiceMessageResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "a3a2f7c01cc0d2cc53c9f7ea9a224866";
  }

  static const char* value(const ::my_turtlebot_localization::MyServiceMessageResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xa3a2f7c01cc0d2ccULL;
  static const uint64_t static_value2 = 0x53c9f7ea9a224866ULL;
};

template<class ContainerAllocator>
struct DataType< ::my_turtlebot_localization::MyServiceMessageResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "my_turtlebot_localization/MyServiceMessageResponse";
  }

  static const char* value(const ::my_turtlebot_localization::MyServiceMessageResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::my_turtlebot_localization::MyServiceMessageResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "#response\n"
"bool navigation_successfull\n"
"string message\n"
;
  }

  static const char* value(const ::my_turtlebot_localization::MyServiceMessageResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::my_turtlebot_localization::MyServiceMessageResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.navigation_successfull);
      stream.next(m.message);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct MyServiceMessageResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::my_turtlebot_localization::MyServiceMessageResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::my_turtlebot_localization::MyServiceMessageResponse_<ContainerAllocator>& v)
  {
    s << indent << "navigation_successfull: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.navigation_successfull);
    s << indent << "message: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.message);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MY_TURTLEBOT_LOCALIZATION_MESSAGE_MYSERVICEMESSAGERESPONSE_H
