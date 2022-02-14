
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tree_entry {char const* name; } ;
struct line {scalar_t__ data; } ;



__attribute__((used)) static const char *
FUNC_0(const struct line *VAR_0)
{
 return ((struct tree_entry *) VAR_0->data)->name;
}
