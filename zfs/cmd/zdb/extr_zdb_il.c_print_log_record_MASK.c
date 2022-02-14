
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {TYPE_1__* zl_os; } ;
typedef TYPE_2__ zilog_t ;
typedef scalar_t__ uint_t ;
typedef int uint64_t ;
typedef int u_longlong_t ;
struct TYPE_11__ {int lrc_txtype; int lrc_txg; scalar_t__ lrc_seq; scalar_t__ lrc_reclen; } ;
typedef TYPE_3__ lr_t ;
struct TYPE_12__ {int zri_count; int (* zri_print ) (TYPE_2__*,int,TYPE_3__*) ;int zri_name; } ;
struct TYPE_9__ {int os_encrypted; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int * VAR_2 ;
 int FUNC_2 (char*,char*,...) ;
 int FUNC_3 (TYPE_2__*,int,TYPE_3__*) ;
 char* VAR_3 ;
 TYPE_4__* VAR_4 ;

__attribute__((used)) static int
FUNC_4(zilog_t *VAR_5, lr_t *VAR_6, void *VAR_7, uint64_t VAR_8)
{
 int VAR_9;
 int VAR_10 = FUNC_1(VAR_2['d'], VAR_2['i']);


 VAR_9 = VAR_6->lrc_txtype;

 FUNC_0(VAR_9 != 0 && (uint_t)VAR_9 < VAR_1);
 FUNC_0(VAR_6->lrc_txg);

 (void) FUNC_2("\t\t%s%s len %6llu, txg %llu, seq %llu\n",
     (VAR_6->lrc_txtype & VAR_0) ? "CI-" : "",
     VAR_4[VAR_9].zri_name,
     (u_longlong_t)VAR_6->lrc_reclen,
     (u_longlong_t)VAR_6->lrc_txg,
     (u_longlong_t)VAR_6->lrc_seq);

 if (VAR_9 && VAR_10 >= 3) {
  if (!VAR_5->zl_os->os_encrypted) {
   VAR_4[VAR_9].zri_print(VAR_5, VAR_9, VAR_6);
  } else {
   (void) FUNC_2("%s(encrypted)\n", VAR_3);
  }
 }

 VAR_4[VAR_9].zri_count++;
 VAR_4[0].zri_count++;

 return (0);
}
