
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int flags; } ;
struct TYPE_8__ {int wdata; int sb; int (* wfunc ) (int ,char*,scalar_t__,int ) ;int status; scalar_t__ strip; TYPE_5__* pt; } ;
struct TYPE_7__ {scalar_t__ len; } ;
typedef scalar_t__ MSize ;
typedef TYPE_1__ GCstr ;
typedef TYPE_2__ BCWriteCtx ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 char* FUNC_0 (int *,scalar_t__) ;
 char* FUNC_1 (char*,char const*,scalar_t__) ;
 char* FUNC_2 (char*,scalar_t__) ;
 TYPE_1__* FUNC_3 (TYPE_5__*) ;
 char* FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 char* FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (int ,char*,scalar_t__,int ) ;

__attribute__((used)) static void FUNC_8(BCWriteCtx *VAR_11)
{
  GCstr *VAR_12 = FUNC_3(VAR_11->pt);
  const char *VAR_13 = FUNC_6(VAR_12);
  MSize VAR_14 = VAR_12->len;
  char *VAR_15 = FUNC_0(&VAR_11->sb, 5+5+VAR_14);
  *VAR_15++ = VAR_4;
  *VAR_15++ = VAR_5;
  *VAR_15++ = VAR_6;
  *VAR_15++ = VAR_7;
  *VAR_15++ = (VAR_11->strip ? VAR_3 : 0) +
  VAR_8*VAR_0 +
  ((VAR_11->pt->flags & VAR_10) ? VAR_1 : 0) +
  VAR_9*VAR_2;
  if (!VAR_11->strip) {
    VAR_15 = FUNC_2(VAR_15, VAR_14);
    VAR_15 = FUNC_1(VAR_15, VAR_13, VAR_14);
  }
  VAR_11->status = VAR_11->wfunc(FUNC_5(&VAR_11->sb), FUNC_4(&VAR_11->sb),
      (MSize)(VAR_15 - FUNC_4(&VAR_11->sb)), VAR_11->wdata);
}
