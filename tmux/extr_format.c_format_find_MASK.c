
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct options_entry {int dummy; } ;
struct format_tree {TYPE_3__* s; int tree; TYPE_2__* w; TYPE_1__* wp; } ;
struct format_entry {char* key; scalar_t__ t; char* value; int (* cb ) (struct format_tree*,struct format_entry*) ;} ;
struct environ_entry {char* value; } ;
struct TYPE_6__ {int environ; int options; } ;
struct TYPE_5__ {int options; } ;
struct TYPE_4__ {int options; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct format_entry* FUNC_0 (int ,int *,struct format_entry*) ;
 char* FUNC_1 (char*) ;
 int FUNC_2 (scalar_t__*,char*) ;
 char* FUNC_3 (char*) ;
 struct environ_entry* FUNC_4 (int ,char const*) ;
 int VAR_4 ;
 char* FUNC_5 (char*) ;
 int FUNC_6 (char*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct options_entry* FUNC_7 (int ,char const*,int*,int ) ;
 char* FUNC_8 (struct options_entry*,int,int) ;
 size_t FUNC_9 (char*,char*) ;
 int FUNC_10 (struct format_tree*,struct format_entry*) ;
 int FUNC_11 (char**,char*,long long) ;
 void* FUNC_12 (char*) ;

__attribute__((used)) static char *
FUNC_13(struct format_tree *VAR_9, const char *VAR_10, int VAR_11)
{
 struct format_entry *VAR_12, VAR_13;
 struct environ_entry *VAR_14;
 static char VAR_15[64];
 struct options_entry *VAR_16;
 int VAR_17;
 char *VAR_18, *VAR_19;

 if (~VAR_11 & VAR_3) {
  VAR_16 = FUNC_7(VAR_6, VAR_10, &VAR_17, 0);
  if (VAR_16 == ((void*)0) && VAR_9->wp != ((void*)0))
   VAR_16 = FUNC_7(VAR_9->wp->options, VAR_10, &VAR_17, 0);
  if (VAR_16 == ((void*)0) && VAR_9->w != ((void*)0))
   VAR_16 = FUNC_7(VAR_9->w->options, VAR_10, &VAR_17, 0);
  if (VAR_16 == ((void*)0))
   VAR_16 = FUNC_7(VAR_8, VAR_10, &VAR_17, 0);
  if (VAR_16 == ((void*)0) && VAR_9->s != ((void*)0))
   VAR_16 = FUNC_7(VAR_9->s->options, VAR_10, &VAR_17, 0);
  if (VAR_16 == ((void*)0))
   VAR_16 = FUNC_7(VAR_7, VAR_10, &VAR_17, 0);
  if (VAR_16 != ((void*)0)) {
   VAR_18 = FUNC_8(VAR_16, VAR_17, 1);
   goto found;
  }
 }
 VAR_18 = ((void*)0);

 VAR_13.key = (char *) VAR_10;
 VAR_12 = FUNC_0(VAR_4, &VAR_9->tree, &VAR_13);
 if (VAR_12 != ((void*)0)) {
  if (VAR_11 & VAR_3) {
   if (VAR_12->t == 0)
    return (((void*)0));
   FUNC_2(&VAR_12->t, VAR_15);
   VAR_15[FUNC_9(VAR_15, "\n")] = '\0';
   VAR_18 = FUNC_12(VAR_15);
   goto found;
  }
  if (VAR_12->t != 0) {
   FUNC_11(&VAR_18, "%lld", (long long)VAR_12->t);
   goto found;
  }
  if (VAR_12->value == ((void*)0) && VAR_12->cb != ((void*)0)) {
   VAR_12->cb(VAR_9, VAR_12);
   if (VAR_12->value == ((void*)0))
    VAR_12->value = FUNC_12("");
  }
  VAR_18 = FUNC_12(VAR_12->value);
  goto found;
 }

 if (~VAR_11 & VAR_3) {
  VAR_14 = ((void*)0);
  if (VAR_9->s != ((void*)0))
   VAR_14 = FUNC_4(VAR_9->s->environ, VAR_10);
  if (VAR_14 == ((void*)0))
   VAR_14 = FUNC_4(VAR_5, VAR_10);
  if (VAR_14 != ((void*)0) && VAR_14->value != ((void*)0)) {
   VAR_18 = FUNC_12(VAR_14->value);
   goto found;
  }
 }

 return (((void*)0));

found:
 if (VAR_18 == ((void*)0))
  return (((void*)0));
 if (VAR_11 & VAR_0) {
  VAR_19 = VAR_18;
  VAR_18 = FUNC_12(FUNC_1(VAR_19));
  FUNC_6(VAR_19);
 }
 if (VAR_11 & VAR_1) {
  VAR_19 = VAR_18;
  VAR_18 = FUNC_12(FUNC_3(VAR_19));
  FUNC_6(VAR_19);
 }
 if (VAR_11 & VAR_2) {
  VAR_19 = VAR_18;
  VAR_18 = FUNC_12(FUNC_5(VAR_19));
  FUNC_6(VAR_19);
 }
 return (VAR_18);
}
