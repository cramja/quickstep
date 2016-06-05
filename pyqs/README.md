# PyQS

## How to use
First, you will need to build quickstep somewhere (the usual `build/`) is fine. Then, in python, try:
```python
import pyqs as qs
print qs.query("create table foo (id int);")
```

More examples can be found in the `examples.py` file.

## Config
Command line arguments can be specified in the `.pyqs_profile` file. The default should work anytime.