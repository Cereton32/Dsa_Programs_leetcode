class Profile {
  String _name;
  int _age;
  String _companyrole;
  Profile(this._name, this._age, this._companyrole);

  String get name => _name;
  String get role => _companyrole;

  set namechange(String name) {
    _name = name;
  }

  void nameChange2nd(String name) {
    _name = name;
  }
}
