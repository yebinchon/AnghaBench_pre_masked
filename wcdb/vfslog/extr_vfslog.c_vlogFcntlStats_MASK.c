
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int lastJournalWriteOffset; int lastJournalReadOffset; int lastMainWriteOffset; int lastMainReadOffset; } ;
typedef TYPE_1__ VLogStat ;
struct TYPE_7__ {scalar_t__ nFilename; int gzMutex; int lastWriteOfs; int lastReadOfs; } ;
typedef TYPE_2__ VLogLog ;
struct TYPE_8__ {TYPE_2__* pLog; } ;
typedef TYPE_3__ VLogFile ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(VLogFile *VAR_2, VLogStat *VAR_3)
{
    VLogLog *VAR_4 = VAR_2->pLog;


    if (VAR_2->pLog->nFilename == 0)
        return VAR_0;

    FUNC_0(VAR_4->gzMutex);
    VAR_3->lastMainReadOffset = VAR_4->lastReadOfs;
    VAR_3->lastMainWriteOffset = VAR_4->lastWriteOfs;


    VAR_4++;
    VAR_3->lastJournalReadOffset = VAR_4->lastReadOfs;
    VAR_3->lastJournalWriteOffset = VAR_4->lastWriteOfs;
    FUNC_1(VAR_4->gzMutex);

    return VAR_1;
}
