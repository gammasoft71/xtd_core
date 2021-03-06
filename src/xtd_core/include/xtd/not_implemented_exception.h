#pragma once
#include "system_exception.h"

/// @brief The xtd namespace contains all fundamental classes to access Hardware, Os, System, and more.
namespace xtd {
  /// @brief The exception that is thrown when a requested method or operation is not implemented.
  /// @par Library
  /// xtd.core
  /// @par Examples
  /// The following example demonstrates how to throw and catch an not_implemented_exception.
  /// @include not_implemented_exception.cpp
  class not_implemented_exception :public system_exception {
  public:
    /// @brief Create a new instance of class not_implemented_exception
    /// @param information (optional) Conatains current information about memeber name, file path and  line number in the file where the exception is occurred. Typically #caller_information_.
    /// @remarks Message is set with the default message associate to the exception.
    not_implemented_exception(const xtd::caller_info& info = xtd::caller_info::empty()) : system_exception(default_message_, info) {}
    /// @brief Create a new instance of class not_implemented_exception
    /// @param message Message string associate to the exception.
    /// @param information (optional) Conatains current information about memeber name, file path and  line number in the file where the exception is occurred. Typically #caller_information_.
    explicit not_implemented_exception(const std::string& message, const xtd::caller_info& info = xtd::caller_info::empty()) : system_exception(message, info) {}
    /// @brief Create a new instance of class not_implemented_exception
    /// @param message Message string associate to the exception.
    /// @param error Error code associate to the exception.
    /// @param information (optional) Conatains current information about memeber name, file path and  line number in the file where the exception is occurred. Typically #caller_information_.
    explicit not_implemented_exception(const std::string& message, const std::error_code& error, const xtd::caller_info& info = xtd::caller_info::empty()) : system_exception(message, error, info) {}
    /// @brief Create a new instance of class not_implemented_exception
    /// @param message Message string associate to the exception.
    /// @param help_link Help link string associate to the exception.
    /// @param information (optional) Conatains current information about memeber name, file path and  line number in the file where the exception is occurred. Typically #caller_information_.
    explicit not_implemented_exception(const std::string& message, const std::string& help_link, const xtd::caller_info& info = xtd::caller_info::empty()) : system_exception(message, help_link, info) {}
    /// @brief Create a new instance of class not_implemented_exception
    /// @param message Message string associate to the exception.
    /// @param error Error code associate to the exception.
    /// @param help_link Help link string associate to the exception.
    explicit not_implemented_exception(const std::string& message, const std::error_code& error, const std::string& help_link, const xtd::caller_info& info = xtd::caller_info::empty()) : system_exception(message, error, help_link, info) {}
    /// @brief Create a new instance of class not_implemented_exception
    /// @param inner_exception The exception that is the cause of the current exception.
    /// @param information (optional) Conatains current information about memeber name, file path and  line number in the file where the exception is occurred. Typically #caller_information_.
    /// @remarks Message is set with the default message associate to the exception.
    not_implemented_exception(const std::exception& inner_exception, const xtd::caller_info& info = xtd::caller_info::empty()) : system_exception(default_message_, inner_exception, info) {}
    /// @brief Create a new instance of class not_implemented_exception
    /// @param message Message string associate to the exception.
    /// @param inner_exception The exception that is the cause of the current exception.
    /// @param information (optional) Conatains current information about memeber name, file path and  line number in the file where the exception is occurred. Typically #caller_information_.
    explicit not_implemented_exception(const std::string& message, const std::exception& inner_exception, const xtd::caller_info& info = xtd::caller_info::empty()) : system_exception(message, inner_exception, info) {}
    /// @brief Create a new instance of class not_implemented_exception
    /// @param message Message string associate to the exception.
    /// @param inner_exception The exception that is the cause of the current exception.
    /// @param error Error code associate to the exception.
    /// @param information (optional) Conatains current information about memeber name, file path and  line number in the file where the exception is occurred. Typically #caller_information_.
    explicit not_implemented_exception(const std::string& message, const std::exception& inner_exception, const std::error_code& error, const xtd::caller_info& info = xtd::caller_info::empty()) : system_exception(message, inner_exception, error, info) {}
    /// @brief Create a new instance of class not_implemented_exception
    /// @param message Message string associate to the exception.
    /// @param inner_exception The exception that is the cause of the current exception.
    /// @param help_link Help link string associate to the exception.
    /// @param information (optional) Conatains current information about memeber name, file path and  line number in the file where the exception is occurred. Typically #caller_information_.
    explicit not_implemented_exception(const std::string& message, const std::exception& inner_exception, const std::string& help_link, const xtd::caller_info& info = xtd::caller_info::empty()) : system_exception(message, inner_exception, help_link, info) {}
    /// @brief Create a new instance of class not_implemented_exception
    /// @param message Message string associate to the exception.
    /// @param inner_exception The exception that is the cause of the current exception.
    /// @param error Error code associate to the exception.
    /// @param help_link Help link string associate to the exception.
    /// @param information (optional) Conatains current information about memeber name, file path and  line number in the file where the exception is occurred. Typically #caller_information_.
    explicit not_implemented_exception(const std::string& message, const std::exception& inner_exception, const std::error_code& error, const std::string& help_link, const xtd::caller_info& info = xtd::caller_info::empty()) : system_exception(message, inner_exception, error, help_link, info) {}

    /// @cond
    not_implemented_exception(const not_implemented_exception&) = default;
    not_implemented_exception& operator=(const not_implemented_exception&) = default;
    /// @endcond
    
  private:
    static constexpr const char* default_message_ = "The method or operation is not implemented.";
  };
}

/// @brief Helper on not_implemented_exception to call it with caller information
/// @remarks Is equivalent to not_implemented_exception({any argument}, caller_info_)
/// @code
/// void my_func() {
///   if (invalid_info) throw not_implemented_exception_(); // same as : throw not_implemented_exception(caller_info_)
///   if (invalid_value) throw not_implemented_exception_("Bad value"); // same as : throw not_implemented_exception("Bad value", caller_info_)
///   ...
/// }
/// @endcode
/// @ingroup keywords
#define not_implemented_exception_(...) not_implemented_exception(add_caller_info_(__VA_ARGS__))
