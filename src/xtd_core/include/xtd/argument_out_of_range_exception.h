#pragma once
#include "argument_exception.h"

/// @brief The xtd namespace contains all fundamental classes to access Hardware, Os, System, and more.
namespace xtd {
  /// @brief The exception that is thrown when one of the arguments provided to a method is out of range.
  /// @par Library
  /// xtd.core
  /// @par Examples
  /// The following example demonstrates how to throw and catch an argument_out_of_range_exception.
  /// @include argument_out_of_range_exception.cpp
  class argument_out_of_range_exception :public argument_exception {
  public:
    /// @brief Create a new instance of class argument_out_of_range_exception
    /// @param information (optional) Conatains current information about memeber name, file path and  line number in the file where the exception is occurred. Typically #caller_information_.
    /// @remarks Message is set with the default message associate to the exception.
    argument_out_of_range_exception(const xtd::caller_info& info = xtd::caller_info::empty()) : argument_exception(default_message_, info) {}
    /// @brief Create a new instance of class argument_out_of_range_exception
    /// @param message Message string associate to the exception.
    /// @param information (optional) Conatains current information about memeber name, file path and  line number in the file where the exception is occurred. Typically #caller_information_.
    explicit argument_out_of_range_exception(const std::string& message, const xtd::caller_info& info = xtd::caller_info::empty()) : argument_exception(message, info) {}
    /// @brief Create a new instance of class argument_out_of_range_exception
    /// @param message Message string associate to the exception.
    /// @param error Error code associate to the exception.
    /// @param information (optional) Conatains current information about memeber name, file path and  line number in the file where the exception is occurred. Typically #caller_information_.
    explicit argument_out_of_range_exception(const std::string& message, const std::error_code& error, const xtd::caller_info& info = xtd::caller_info::empty()) : argument_exception(message, error, info) {}
    /// @brief Create a new instance of class argument_out_of_range_exception
    /// @param message Message string associate to the exception.
    /// @param help_link Help link string associate to the exception.
    /// @param information (optional) Conatains current information about memeber name, file path and  line number in the file where the exception is occurred. Typically #caller_information_.
    explicit argument_out_of_range_exception(const std::string& message, const std::string& help_link, const xtd::caller_info& info = xtd::caller_info::empty()) : argument_exception(message, help_link, info) {}
    /// @brief Create a new instance of class argument_out_of_range_exception
    /// @param message Message string associate to the exception.
    /// @param error Error code associate to the exception.
    /// @param help_link Help link string associate to the exception.
    explicit argument_out_of_range_exception(const std::string& message, const std::error_code& error, const std::string& help_link, const xtd::caller_info& info = xtd::caller_info::empty()) : argument_exception(message, error, help_link, info) {}
    /// @brief Create a new instance of class argument_out_of_range_exception
    /// @param inner_exception The exception that is the cause of the current exception.
    /// @param information (optional) Conatains current information about memeber name, file path and  line number in the file where the exception is occurred. Typically #caller_information_.
    /// @remarks Message is set with the default message associate to the exception.
    argument_out_of_range_exception(const std::exception& inner_exception, const xtd::caller_info& info = xtd::caller_info::empty()) : argument_exception(default_message_, inner_exception, info) {}
    /// @brief Create a new instance of class argument_out_of_range_exception
    /// @param message Message string associate to the exception.
    /// @param inner_exception The exception that is the cause of the current exception.
    /// @param information (optional) Conatains current information about memeber name, file path and  line number in the file where the exception is occurred. Typically #caller_information_.
    explicit argument_out_of_range_exception(const std::string& message, const std::exception& inner_exception, const xtd::caller_info& info = xtd::caller_info::empty()) : argument_exception(message, inner_exception, info) {}
    /// @brief Create a new instance of class argument_out_of_range_exception
    /// @param message Message string associate to the exception.
    /// @param inner_exception The exception that is the cause of the current exception.
    /// @param error Error code associate to the exception.
    /// @param information (optional) Conatains current information about memeber name, file path and  line number in the file where the exception is occurred. Typically #caller_information_.
    explicit argument_out_of_range_exception(const std::string& message, const std::exception& inner_exception, const std::error_code& error, const xtd::caller_info& info = xtd::caller_info::empty()) : argument_exception(message, inner_exception, error, info) {}
    /// @brief Create a new instance of class argument_out_of_range_exception
    /// @param message Message string associate to the exception.
    /// @param inner_exception The exception that is the cause of the current exception.
    /// @param help_link Help link string associate to the exception.
    /// @param information (optional) Conatains current information about memeber name, file path and  line number in the file where the exception is occurred. Typically #caller_information_.
    explicit argument_out_of_range_exception(const std::string& message, const std::exception& inner_exception, const std::string& help_link, const xtd::caller_info& info = xtd::caller_info::empty()) : argument_exception(message, inner_exception, help_link, info) {}
    /// @brief Create a new instance of class argument_out_of_range_exception
    /// @param message Message string associate to the exception.
    /// @param inner_exception The exception that is the cause of the current exception.
    /// @param error Error code associate to the exception.
    /// @param help_link Help link string associate to the exception.
    /// @param information (optional) Conatains current information about memeber name, file path and  line number in the file where the exception is occurred. Typically #caller_information_.
    explicit argument_out_of_range_exception(const std::string& message, const std::exception& inner_exception, const std::error_code& error, const std::string& help_link, const xtd::caller_info& info = xtd::caller_info::empty()) : argument_exception(message, inner_exception, error, help_link, info) {}

    /// @cond
    argument_out_of_range_exception(const argument_out_of_range_exception&) = default;
    argument_out_of_range_exception& operator=(const argument_out_of_range_exception&) = default;
    /// @endcond
    
  private:
    static constexpr const char* default_message_ = "Specified argument is out of range of valid values.";
  };
}

/// @brief Helper on argument_out_of_range_exception to call it with caller information
/// @remarks Is equivalent to argument_out_of_range_exception({any argument}, caller_info_)
/// @code
/// void my_func() {
///   if (invalid_info) throw argument_out_of_range_exception_(); // same as : throw argument_out_of_range_exception(caller_info_)
///   if (invalid_value) throw argument_out_of_range_exception_("Bad value"); // same as : throw argument_out_of_range_exception("Bad value", caller_info_)
///   ...
/// }
/// @endcode
/// @ingroup keywords
#define argument_out_of_range_exception_(...) argument_out_of_range_exception(add_caller_info_(__VA_ARGS__))