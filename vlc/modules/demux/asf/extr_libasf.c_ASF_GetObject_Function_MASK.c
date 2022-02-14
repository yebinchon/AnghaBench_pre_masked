
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_guid_t ;
struct ASF_Object_Function_entry {int p_id; } ;


 size_t FUNC_0 (struct ASF_Object_Function_entry const*) ;
 struct ASF_Object_Function_entry const* VAR_0 ;
 scalar_t__ FUNC_1 (int ,int const*) ;

__attribute__((used)) static const struct ASF_Object_Function_entry * FUNC_2( const vlc_guid_t *VAR_1 )
{
    for( size_t VAR_2 = 0; VAR_2 < FUNC_0(VAR_0); VAR_2++ )
    {
        if( FUNC_1( VAR_0[VAR_2].p_id, VAR_1 ) )
            return &VAR_0[VAR_2];
    }
    return ((void*)0);
}
