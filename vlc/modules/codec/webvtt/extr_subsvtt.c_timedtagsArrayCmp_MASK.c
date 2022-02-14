
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ i_start; } ;
typedef TYPE_1__ webvtt_dom_tag_t ;
typedef scalar_t__ int64_t ;



__attribute__((used)) static int FUNC_0( const void *VAR_0, const void *VAR_1 )
{
    const webvtt_dom_tag_t *VAR_2 = *((const webvtt_dom_tag_t **) VAR_0);
    const webvtt_dom_tag_t *VAR_3 = *((const webvtt_dom_tag_t **) VAR_1);
    const int64_t VAR_4 = VAR_2->i_start - VAR_3->i_start;
    return VAR_4 == 0 ? 0 : VAR_4 > 0 ? 1 : -1;
}
