/*
 * Copyright (c) 2013, 2014, 2015 Corvusoft
 */

//System Includes

//Project Includes
#include "corvusoft/restbed/request.h"
#include "corvusoft/restbed/detail/request_impl.h"

//External Includes

//System Namespaces
using std::map;
using std::string;
using std::function;
using std::multimap;
using std::shared_ptr;

//Project Namespaces
using restbed::detail::RequestImpl;

//External Namespaces
using framework::Bytes;
using framework::String;

namespace restbed
{
    Request::Request( void ) : m_pimpl( new RequestImpl )
    {
        return;
    }

    Request::~Request( void )
    {
        return;
    }

    const string& Request::get_protocol( void ) const
    {
        return m_pimpl->get_protocol( );
    }

    bool Request::has_header( const string& name ) const
    {
        return m_pimpl->has_header( name );
    }
    
    bool Request::has_path_parameter( const string& name, const bool ignore_case ) const
    {
        return m_pimpl->has_path_parameter( name, ignore_case );
    }
    
    bool Request::has_query_parameter( const string& name, const bool ignore_case ) const
    {
        return m_pimpl->has_query_parameter( name, ignore_case );
    }

    double Request::get_version( void ) const
    {
        return m_pimpl->get_version( );
    }

    const string& Request::get_path( void ) const
    {
        return m_pimpl->get_path( );
    }

    const string& Request::get_method( void ) const
    {
        return m_pimpl->get_method( );
    }

    const shared_ptr< framework::Bytes >& Request::get_body( void ) const
    {
        return m_pimpl->get_body( );
    }
    
//    Bytes Request::get_body( void ) const
//    {
//        return m_pimpl->get_body( );
//    }
//
//    Bytes Request::get_body( const size_t length ) const
//    {
//        return m_pimpl->get_body( length );
//    }
//
//    Bytes Request::get_body( const string& delimiter ) const
//    {
//        return m_pimpl->get_body( delimiter );
//    }
//    
//    double Request::get_version( void ) const
//    {
//        return m_pimpl->get_version( );
//    }
//
//    string Request::get_method( void ) const
//    {
//        return m_pimpl->get_method( );
//    }
//    
//    string Request::get_path( void ) const
//    {
//        return m_pimpl->get_path( );
//    }
//    
//    string Request::get_origin( void ) const
//    {
//        return m_pimpl->get_origin( );
//    }
//
//    string Request::get_destination( void ) const
//    {
//        return m_pimpl->get_destination( );
//    }
//
//    string Request::get_protocol( void ) const
//    {
//        return m_pimpl->get_protocol( );
//    }
//    
//    string Request::get_header( const string& name, const string& default_value ) const
//    {
//        return m_pimpl->get_header( name, default_value );
//    }
//    
//    multimap< string, string > Request::get_headers( void ) const
//    {
//        return m_pimpl->get_headers( );
//    }

    void Request::get_header( const string& name,
                              int& value,
                              const int default_value,
                              const function< string ( const string& ) >& transform ) const
    {
        m_pimpl->get_header( name, value, default_value, transform );
    }

    void Request::get_header( const string& name,
                              unsigned int& value,
                              const unsigned int default_value,
                              const function< string ( const string& ) >& transform ) const
    {
        m_pimpl->get_header( name, value, default_value, transform );
    }

    void Request::get_header( const string& name,
                              long& value,
                              const long default_value,
                              const function< string ( const string& ) >& transform ) const
    {
        m_pimpl->get_header( name, value, default_value, transform );
    }

    void Request::get_header( const string& name,
                              unsigned long& value,
                              const unsigned long default_value,
                              const function< string ( const string& ) >& transform ) const
    {
        m_pimpl->get_header( name, value, default_value, transform );
    }

    void Request::get_header( const string& name,
                              float& value,
                              const float default_value,
                              const function< string ( const string& ) > transform ) const
    {
        m_pimpl->get_header( name, value, default_value, transform );
    }

    void Request::get_header( const string& name,
                              double& value,
                              const double default_value,
                              const function< string ( const string& ) >& transform ) const
    {
        m_pimpl->get_header( name, value, default_value, transform );
    }

    string Request::get_header( const string& name,
                               const function< string ( const string& ) >& transform ) const
    {
        return m_pimpl->get_header( name, String::empty, transform );
    }

    string Request::get_header( const string& name,
                                const string& default_value,
                                const function< string ( const string& ) >& transform ) const
    {
        return m_pimpl->get_header( name, default_value, transform );
    }

    multimap< string, string > Request::get_headers( const string& name, const function< string ( const string& ) >& transform ) const
    {
        return m_pimpl->get_headers( name, transform );
    }

//    string Request::get_query_parameter( const string& name, const string& default_value ) const
//    {
//        return m_pimpl->get_query_parameter( name, default_value );
//    }
//
//    multimap< string, string > Request::get_query_parameters( void ) const
//    {
//        return m_pimpl->get_query_parameters( );
//    }
//    
//    multimap< string, string > Request::get_query_parameters( const string& name ) const
//    {
//        return m_pimpl->get_query_parameters( name );
//    }
//    
//    string Request::get_path_parameter( const string& name, const string& default_value ) const
//    {
//        return m_pimpl->get_path_parameter( name, default_value );
//    }
//    
//    map< string, string > Request::get_path_parameters( void ) const
//    {
//        return m_pimpl->get_path_parameters( );
//    }
    string Request::get_path_parameter( const string& name,
                                        const string& default_value,
                                        const function< string ( const string& ) >& transform ) const
    {
        return m_pimpl->get_path_parameter( name, default_value, transform );
    }
}
