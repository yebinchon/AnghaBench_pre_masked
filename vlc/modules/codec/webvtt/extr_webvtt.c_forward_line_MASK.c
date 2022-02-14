
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int section; int priv; int (* pf_header ) (int ,int ,int,char const*) ;} ;
typedef TYPE_1__ webvtt_text_parser_t ;


 int FUNC_0 (int ,int ,int,char const*) ;

__attribute__((used)) static void FUNC_1( webvtt_text_parser_t *VAR_0, const char *VAR_1, bool VAR_2 )
{
    if( VAR_0->pf_header )
        VAR_0->pf_header( VAR_0->priv, VAR_0->section, VAR_2, VAR_1 );
}
