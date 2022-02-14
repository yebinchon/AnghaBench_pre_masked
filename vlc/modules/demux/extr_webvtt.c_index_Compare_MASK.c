
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct index_entry_s {scalar_t__ time; scalar_t__ active; } ;



__attribute__((used)) static int FUNC_0( const void *VAR_0, const void *VAR_1 )
{
    struct index_entry_s *VAR_2 = (struct index_entry_s *) VAR_0;
    struct index_entry_s *VAR_3 = (struct index_entry_s *) VAR_1;
    if( VAR_2->time == VAR_3->time )
    {
        if( VAR_2->active > VAR_3->active )
            return -1;
        else
            return VAR_3->active - VAR_2->active;
    }
    else return VAR_2->time < VAR_3->time ? -1 : 1;
}
