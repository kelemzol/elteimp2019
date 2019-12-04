#include <stdio.h>
#include <stdlib.h>


#define glist(t) \
  typedef struct list_s_##t { \
    t *value; \
    struct list_s_##t *next; \
  } list_##t; \
  \
  list_##t *new_##t() { \
    return 0; \
  } \
  \
  list_##t *singleton_##t(t *value) { \
    list_##t *l = malloc(sizeof(list_##t)); \
    l->value = value; \
    l->next = 0; \
    return l; \
  } 
  
glist(int)

#define list_t(t) list_##t
#define singleton_c(t) singleton_##t


typedef struct list_s {
  void *value;
  struct list_s *next;
} list;

list *new() {
  return 0;
}

list *singleton(void *value) {
  list *l = malloc(sizeof(list));
  l->value = value;
  l->next = 0;
  return l;
}

int is_empty(list *l) {
  return !l;
}

list *drop_head(list *l) {
  list *r = l;
  if(l) {
    r = l->next;
    free(l);
  }
  return r;
}

list *cons(list *l, void *value) {
  list *h = singleton(value);
  h->next = l;
  return h;
}

int main() {
  int arr[] = {1,2,3};
  list *l = singleton(arr);
  l = cons(l, arr+1);
  l = cons(l, arr+2);
  for(; !is_empty(l); l=drop_head(l)) {
    printf("%d\n", *(int*)(l->value));
  }

  char *p;
  list_t(int) *il = singleton_c(int)(arr);
}

