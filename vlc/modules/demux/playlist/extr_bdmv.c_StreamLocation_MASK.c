
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char const* psz_filepath; char const* psz_url; } ;
typedef TYPE_1__ stream_t ;



__attribute__((used)) static const char *FUNC_0( const stream_t *VAR_0 )
{
    return VAR_0->psz_filepath ? VAR_0->psz_filepath : VAR_0->psz_url;
}
