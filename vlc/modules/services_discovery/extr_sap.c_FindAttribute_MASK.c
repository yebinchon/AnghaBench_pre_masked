
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int i_attributes; int pp_attributes; TYPE_1__* mediav; } ;
typedef TYPE_2__ sdp_t ;
struct TYPE_4__ {int i_attributes; int pp_attributes; } ;


 char* FUNC_0 (int ,int ,char const*) ;

__attribute__((used)) static const char *FUNC_1 (const sdp_t *VAR_0, unsigned VAR_1,
                                  const char *VAR_2)
{

    const char *VAR_3 = FUNC_0 (VAR_0->mediav[VAR_1].pp_attributes,
                                     VAR_0->mediav[VAR_1].i_attributes, VAR_2);
    if (VAR_3 == ((void*)0))
        VAR_3 = FUNC_0 (VAR_0->pp_attributes, VAR_0->i_attributes, VAR_2);
    return VAR_3;
}
