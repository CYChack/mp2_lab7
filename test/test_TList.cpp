# include "list.h"
# include "../gtest/gtest.h"

TEST(TList, can_create_list)
{
  ASSERT_NO_THROW(TList<int> l);
}

TEST(TList, can_copy_list)
{
  TList<int> l1;

  l1.InsFirst(3);
  l1.InsLast(0);

  ASSERT_NO_THROW(TList<int> l2(l1));
}

TEST(TList, can_insert_first_and_last_set_elem)
{
  TList<int> l1;
  TListElem<int> a(5);
  TListElem<int> b(10);
  TListElem<int>* temp = nullptr;

  l1.InsFirst(a.GetData());

  temp = l1.GetFirst();

  EXPECT_EQ(5, temp[0].GetData());

  l1.InsLast(b.GetData());

  temp = l1.GetLast();

  EXPECT_EQ(10, temp[0].GetData());
}

TEST(TList, can_assign_list)
{
  TList<int> l1;
  TList<int> l2;

  l1.InsFirst(1);
  l1.InsLast(0);

  ASSERT_NO_THROW(l2 = l1);
}

TEST(TList, can_insert_elem_in_first_list)
{
  TList<int> l;

  ASSERT_NO_THROW(l.InsFirst(10));
}

TEST(TList, can_insert_elem_in_last_list)
{
  TList<int> l;

  ASSERT_NO_THROW(l.InsLast(10));
}

TEST(TList, can_get_elem_first)
{
  TList<int> l;

  l.InsFirst(10);

  ASSERT_NO_THROW(l.GetFirst());
}

TEST(TList, can_get_elem_last)
{
  TList<int> l;

  l.InsFirst(5);
  l.InsLast(10);

  ASSERT_NO_THROW(l.GetLast());
}

TEST(TList, can_del_elem)
{
  TList<int> l;

  l.InsFirst(5);
  l.InsLast(10);

  ASSERT_NO_THROW(l.DelFirst());
}

TEST(TList, can_get_count)
{
  TList<int> l;

  l.InsFirst(5);
  l.InsLast(10);

  ASSERT_NO_THROW(l.GetCount());
}

TEST(TListElem, can_get_data_listelem)
{
  TListElem<int> l(10);

  EXPECT_EQ(l.GetData(), 10);
}

TEST(TListElem, can_set_data_list_elem)
{
  TListElem<int> l(5);

  ASSERT_NO_THROW(l.SetData(5));
}

TEST(TListElem, can_get_next_list_elem)
{
  TListElem<int> l(5);

  ASSERT_NO_THROW(l.GetNext());
}

TEST(TListElem, can_get_prev_list_elem)
{
  TListElem<int> l(5);

  ASSERT_NO_THROW(l.GetPrev());
}

TEST(TListElem, can_set_next_list_elem)
{
  TListElem<int>* _next = 0;
  TListElem<int> a(0);

  a.SetNext(_next);

  EXPECT_EQ(a.GetNext(), _next);
}

TEST(TListElem, can_set_prev_list_elem)
{
  TListElem<int>* _prev = 0;
  TListElem<int> a(0);

  a.SetPrev(_prev);

  EXPECT_EQ(a.GetPrev(), _prev);
}

TEST(TList, list_full_check)
{
  TList<int> l;

  EXPECT_EQ(l.IsFull(), false);
}

TEST(TList, list_empty_check)
{
  TList<int> l;

  EXPECT_EQ(l.IsEmpty(), true);
}
