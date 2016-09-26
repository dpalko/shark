#ifndef SHARKAPP_H
#define SHARKAPP_H

#include "MooseApp.h"

class SharkApp;

template<>
InputParameters validParams<SharkApp>();

class SharkApp : public MooseApp
{
public:
  SharkApp(InputParameters parameters);
  virtual ~SharkApp();

  static void registerApps();
  static void registerObjects(Factory & factory);
  static void associateSyntax(Syntax & syntax, ActionFactory & action_factory);
};

#endif /* SHARKAPP_H */
