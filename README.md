# stoej_core

stoej is a library of various utilities that help with the development of audio
plugins with the JUCE framework. It depends on JUCE to function.

## Development Practices

### File Naming

- for files that define a single large class, the file name is:
  ```
  stoej_ClassName.h
  ```

- for files that define a set of functions and / or a set of small data-calsses:
  ```
  stoej_header_name.h
  ```

# Includes

- put includes in CPP files as much as possible. All public headers should be put
in the module header.
- use chevrons for module and library includes
- use quotes for internal includes
- place module and library includes before internal includes