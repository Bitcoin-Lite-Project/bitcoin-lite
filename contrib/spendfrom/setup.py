from distutils.core import setup
setup(name='BCLspendfrom',
      version='1.0',
      description='Command-line utility for bitcoinlite "coin control"',
      author='Gavin Andresen',
      author_email='gavin@bitcoinlitefoundation.org',
      requires=['jsonrpc'],
      scripts=['spendfrom.py'],
      )
