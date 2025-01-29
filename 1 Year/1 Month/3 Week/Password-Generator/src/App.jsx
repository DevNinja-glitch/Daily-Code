import { useState, useCallback } from 'react'


function App() {
  const [length, setLength] = useState(8);
  const [password, setPassword] = useState("");
  const [numbers, setNumbers] = useState(false);
  const [characters, setCharacters] = useState(false);
  const passwordGenerator = useCallback(() => {
    let pass = ""
    let str = "AQWSZEDXRFCTGVYHBUJNIKMOLPaqzwsxedcrfvtgnbyhujmiklop"
    let numbers = "012345679"
    let characters = "!@#$%^&*()~?><,."
    for (let i = 1; i <= Array.length; i++) {
      let char = Math.floor(Math.random() * str.length * 1)
      pass = str.charAt(char)
    }
    setPassword(pass)
  }, [length, setPassword, numbers, characters])
  return (
    <>
      <div className='w-full max-w-md shadow-md mx-auto rounded-lg bg-gray-700 text-orange-500 text-center px-4 my-8'>text</div>
    </>
  )
}

export default App
