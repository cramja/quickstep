#!/usr/bin/python
import pyqs as qs

queries = ["drop table foo;",
  "create table foo (id int, s1 float, s2 float);",
  "insert into foo select i, (i*47)/5041, i / 100 from generate_series(0,100) as gs(i);",
  "select * from foo where id < 10;"]

for query in queries[:-1]:
  try:
    qs.query(query)
  except:
    # bad queries will throw an exception.
    pass

res = qs.query(queries[-1])
print "Table head:\n{}".format(res[0])
print "Table body:"
for row in res[1]:
  print row

# A query result can be loaded into a pandas dataframe.
pd = -1
try:
  import pandas
  pd = pandas
except:
  pass

if pd != -1:
  res = qs.query("select * from foo;")
  df = pd.DataFrame(res[1], columns=res[0])
  df.id = df.id.astype(int, inplace=True)
  # execute the same query as above using pandas.
  print df[df.id < 10]

  df.describe()