
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int intf_thread_t ;
typedef int dbus_bool_t ;
typedef int DBusMessageIter ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,int const*) ;

__attribute__((used)) static int
FUNC_2( intf_thread_t *VAR_4, DBusMessageIter *VAR_5 )
{
    FUNC_0( VAR_4 );
    const dbus_bool_t VAR_6 = VAR_1;

    if (!FUNC_1( VAR_5, VAR_0, &VAR_6 ))
        return VAR_2;

    return VAR_3;
}
